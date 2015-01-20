# HTTP Server on the DK-TM4C129X Board

### January 20. 2015
I have a DK-TM4C129X evaluation board from Texas Instruments and would like to set up an embedded HTTP server on it.  The example code from TI left a lot of improvements to be desired (for example, they #include a bunch of .c source files in utils/lwiplib.c).

This project is my attempt in making a better code structure and provide a starting point for projects needing embedded HTTP server.  The FreeRTOS and LWIP open-source libraries will be used.  I will begin with TI's example code and sculpt it to the way I like.