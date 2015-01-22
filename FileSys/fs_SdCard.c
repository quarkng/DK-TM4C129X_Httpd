//*****************************************************************************
//
// fs.c - File System Processing for lwIP Web Server Apps.
//
// This is to be the bridge between the SD-Card functions and lwIP's Httpd
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include "lwip/mem.h"
#include "httpserver_raw/httpd.h"
#include "httpserver_raw/fs.h"

#include "fatfs/src/ff.h"
#include "fatfs/src/diskio.h"


//*****************************************************************************

#if LWIP_HTTPD_CUSTOM_FILES
#error LWIP_HTTPD_CUSTOM_FILES not implemented
#endif /* LWIP_HTTPD_CUSTOM_FILES */

#if LWIP_HTTPD_FILE_STATE
#error LWIP_HTTPD_FILE_STATE not implemented
#endif /* LWIP_HTTPD_FILE_STATE */

#if HTTPD_PRECALCULATED_CHECKSUM
#error HTTPD_PRECALCULATED_CHECKSUM not implemented
#endif /* HTTPD_PRECALCULATED_CHECKSUM */


//*****************************************************************************
// Defines the size of the buffers that hold the path from the SD card.
// The buffer size must be large enough to hold the longest expected full path
// name, including the file name, and a trailing null character.
//*****************************************************************************
#define PATH_BUF_SIZE   (80)

// Temporary buffer size for reading/writing to SD card.
#define DATA_BUF_SIZE   (_MAX_SS)


#define WEB_FOLDER  "/html"	// All web files are under this sub-folder in the SD card


//*****************************************************************************
// A structure that helps tie FatFS and lwIP httpd fs-interface.
typedef struct
{
	struct fs_file fs;
	FIL            fileObject;
} SdCardFsFile_t;

//*****************************************************************************

static FATFS g_sFatFs;
//static DIR g_sDirObject;
//static FILINFO g_sFileInfo;
//static FIL g_sFileObject;


//*****************************************************************************
//
// Initialize the file system.
//
//*****************************************************************************
void
fs_init(void)
{
	FRESULT iFResult;

    //
    // Mount the file system, using logical disk 0.
    //
    iFResult = f_mount(0, &g_sFatFs);
    if(iFResult != FR_OK)
    {
//        UARTprintf("f_mount error: %s\n", StringFromFResult(iFResult));
//        return(1);
    	for(;;);
    }



}

//*****************************************************************************
//
// File System tick handler.
//
//*****************************************************************************
void
fs_tick(uint32_t ui32TickMS)
{
    //
    // Nothing special to do for this application.  Flash File System only.
    //
}

//*****************************************************************************
//
// Open a file and return a handle to the file, if found.  Otherwise,
// return NULL.
//
//*****************************************************************************
struct fs_file *
fs_open(const char *name)
{
    SdCardFsFile_t *psFile = NULL;

    psFile = (SdCardFsFile_t *) mem_malloc(sizeof(*psFile));
    if(NULL != psFile)
    {
    	FRESULT iFResult;
    	char fullname[PATH_BUF_SIZE];

		strncpy( fullname, (name[0] != '/') ? (WEB_FOLDER "/") : (WEB_FOLDER), PATH_BUF_SIZE );
    	strncat( fullname, name, PATH_BUF_SIZE);

    	iFResult = f_open(&psFile->fileObject, fullname, FA_READ);
        if(iFResult != FR_OK)
        {
        	mem_free(psFile);
            return(NULL);
        }

        psFile->fs.data = NULL; // psFile->fileObject.buf
        psFile->fs.len  =  0; // psFile->fileObject.fsize;
        psFile->fs.index = psFile->fileObject.fptr;

        // We are not using any file system extensions in this
        // application, so set the pointer to NULL.
        psFile->fs.pextension = NULL;

        // None of the files include http headers
        psFile->fs.http_header_included = 0;
    }

    return(&psFile->fs);
}

//*****************************************************************************
//
// Close an opened file designated by the handle.
//
//*****************************************************************************
void
fs_close(struct fs_file *file)
{
    //
    // Free the main file system object.
    //
    mem_free(file);
}

//*****************************************************************************
//
// Read the next chunck of data from the file.  Return the count of data
// that was read.  Return 0 if no data is currently available.  Return
// a -1 if at the end of file.
//
//*****************************************************************************
int
fs_read(struct fs_file *file, char *buffer, int count)
{
    int iAvailable = -1;
    UINT br;
    SdCardFsFile_t *psFile = (SdCardFsFile_t *) file;
    FRESULT frslt;

    //
    // Check to see if more data is available.
    //
    if(psFile->fileObject.fsize <= psFile->fileObject.fptr)
    {
        //
        // There is no remaining data.  Return a -1 for EOF indication.
        //
        return(-1);
    }


    frslt = f_read( &psFile->fileObject, buffer, count, &br );

    if( frslt != FR_OK )
    {
    	return(-1); // read error
    }

    iAvailable = br;

    // Always synchronize the two structure's values
    psFile->fs.index = psFile->fileObject.fptr;
    psFile->fs.len  = psFile->fileObject.fsize;

    return(iAvailable);
}

//*****************************************************************************
//
// Determine the number of bytes left to read from the file.
//
//*****************************************************************************
int fs_bytes_left(struct fs_file *file)
{
	SdCardFsFile_t *psFile = (SdCardFsFile_t *) file;

    return(psFile->fileObject.fsize - psFile->fileObject.fptr);
}
