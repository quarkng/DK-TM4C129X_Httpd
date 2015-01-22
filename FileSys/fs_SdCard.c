//*****************************************************************************
//
// fs.c - File System Processing for lwIP Web Server Apps.
//
// This is to be the bridge between the SD-Card functions and lwIP's Httpd
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
//#include <string.h>
//#include "utils/lwiplib.h"
//#include "httpserver_raw/httpd.h"
#include "httpserver_raw/fs.h"
#include "httpserver_raw/fsdata.h"

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
#define DATA_BUF_SIZE   (128)


//*****************************************************************************
//
// Initialize the file system.
//
//*****************************************************************************
void
fs_init(void)
{
    //
    // Nothing special to do for this application.  Flash File System only.
    //
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
    struct fs_file *psFile = NULL;

    psFile = mem_malloc(sizeof(struct fs_file));
    if(NULL != psFile)
    {
    	FRESULT iFResult;
    	static FIL fileObject;

    	iFResult = f_open(&fileObject, name, FA_READ);


        psFile->data = (char*) &fileObject;
        psFile->len  = 0;

        // For now, we setup the read index to the end of the file,
        // indicating that all data has been read.
        psFile->index = 0;

        // We are not using any file system extensions in this
        // application, so set the pointer to NULL.
        psFile->pextension = NULL;

        // None of the files include http headers
        psFile->http_header_included = 0;
    }

    return(psFile);
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

#if 0
    //
    // Check to see if more data is available.
    //
    if(file->len == file->index)
    {
        //
        // There is no remaining data.  Return a -1 for EOF indication.
        //
        return(-1);
    }

    //
    // Determine how much data we can copy.  The minimum of the 'count'
    // parameter or the available data in the file system buffer.
    //
    iAvailable = file->len - file->index;
    if(iAvailable > count)
    {
        iAvailable = count;
    }

    //
    // Copy the data.
    //
    memcpy(buffer, file->data + iAvailable, iAvailable);
    file->index += iAvailable;

    //
    // Return the count of data that we copied.
    //
#endif
    return(iAvailable);
}

//*****************************************************************************
//
// Determine the number of bytes left to read from the file.
//
//*****************************************************************************
int fs_bytes_left(struct fs_file *file)
{
#if 0
    //
    // Return the number of bytes left to be read from this file.
    //
    return(file->len - file->index);
#endif
    return 0;
}
