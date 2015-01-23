<!--- Best viewed as GitHub-Flavored Markdown ( http://jbt.github.io/markdown-editor/ ) -->
<!--- Also mostly compatible with StackEdit Markdown ( https://stackedit.io/editor ) -->

# HTTP Server on the DK-TM4C129X Board

This is an HTTP server running on the [DK-TM4C129X](http://www.ti.com/tool/dk-tm4c129x) board.  Code was developed using TI's example code as a starting point (see history below).

The web files reside in the SD card.  This allows you to change View (in SD Card) separate from the Model and Controller (in internal Flash).  In other words, you can change web page files and not have to reburn the microcontroller's flash.

--------
### Setup in CodeComposer v6
Import all projects into the same workspace.  The DK-TM4C129X_Httpd project depends on the other projects being compiled into static libraries.

* DK-TM4C129X_Httpd
* FileSys
* FreeRTOS
* LWIP_1_4_1
* TI_Drivers

When testing this out, copy the items inside *_SD_Card_Contents* to the root directory of an SD Card.  The files in *html* folder will be served as the root folder of the web server.  

I have seen it have strange failures if you try to hot-swap the SD card.   **Always** power down the board completely when inserting the SD card.

--------
### Condensed History

#### January 20, 2015
I have a DK-TM4C129X evaluation board from Texas Instruments and would like to set up an embedded HTTP server on it.  The example code from TI left a lot of improvements to be desired (for example, they #include a bunch of .c source files in utils/lwiplib.c).

This project is my attempt in making a better code structure and provide a starting point for projects needing embedded HTTP server.  The FreeRTOS and LWIP open-source libraries will be used.  I will begin with TI's example code and sculpt it to the way I like.

#### January 21, 2015
* Move the LWIP and FreeRTOS into separate projects so that they do not get recompiled everytime the application project has some changes.
* Also, plan to take a look into using SD card to hold HTML files so that they do not need to be converted into C arrays to be burned into program Flash.
