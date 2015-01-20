//*****************************************************************************
//
// fontcm22.c - Font definition for the 22pt Cm font.
//
// Copyright (c) 2011-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.0.12573 of the Tiva Graphics Library.
//
//*****************************************************************************

//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

//*****************************************************************************
//
// Details of this font:
//     Characters: 32 to 126 inclusive
//     Style: cm
//     Size: 22 point
//     Bold: no
//     Italic: no
//     Memory usage: 2600 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 22 point Cm font.
// Contains characters 32 to 126 inclusive.
//
//*****************************************************************************
static const uint8_t g_pui8Cm22Data[2400] =
{
      5,   9,   0,  24,  96,  17,   4,  66,  34,  34,  34,  34,
     34,  34,  34,  33,  49,  49, 242,  34, 240, 112,  16,   9,
    240, 194,  49,  51,  34,  65,  49,  65,  49,  49,  49, 129,
      0,  15,  40,  17,   0,   7,  33,  65, 177,  49, 177,  65,
    177,  65, 177,  49, 177,  65, 111, 113,  65, 177,  49, 177,
     65, 127,  97,  65, 177,  49, 177,  65, 177,  65, 177,  49,
    177,  65, 177,  65, 240, 176,  41,  10, 209, 132,  81,  17,
     33,  49,  33,  49,  33,  33,  34,  33,  33,  34,  33,  33,
    115, 132, 113,  18,  97,  34,  33,  33,  49,  33,  33,  49,
     33,  33,  49,  33,  33,  33,  69, 113,   0,   5,  96,  55,
     17,  34, 129,  81,  33,  98,  65,  50,  66,  81,  70,  97,
     65,  65,  97,  65,  49, 113,  65,  33, 129,  65,  33, 145,
     33,  33, 178,  33,  66, 161,  49,  33, 129,  49,  65, 113,
     49,  65,  97,  65,  65,  81,  81,  65,  81,  81,  65,  65,
    113,  33,  81, 130,   0,   9,  43,  16, 240,  67, 209,  33,
    177,  49, 177,  49, 177,  49, 177,  33, 193,  17, 211,  84,
     81, 113,  99,  81,  97,  33,  81,  81,  65,  49,  97,  81,
     17, 113,  97,  81,  34,  65,  17,  50,  53,  52,   0,  10,
     48,  10,   5, 242,  51,  65,  65,  49,   0,   9,  16,  23,
      6, 241,  65,  65,  81,  81,  65,  81,  81,  81,  81,  81,
     81,  81,  81,  97,  81,  81,  97,  97,  81,  32,  22,   6,
    193,  97,  97,  81,  81,  97,  81,  81,  81,  81,  81,  81,
     81,  81,  65,  81,  65,  81,  65, 176,  20,   9, 193, 129,
     81,  33,  33,  49,  17,  17,  83,  85,  49,  33,  33,  81,
    129,   0,  14,  16,  21,  15,   0,   8,  33, 225, 225, 225,
    225, 225, 225, 141, 129, 225, 225, 225, 225, 225,   0,   8,
     64,  10,   5,   0,   9,  65,  51,  65,  65,  49, 208,   8,
      7,   0,  10,  69,   0,   8,  16,   8,   4,   0,   7,  66,
     34, 240, 112,  25,  10, 240,  33, 145, 129, 145, 145, 129,
    145, 129, 145, 145, 129, 145, 145, 129, 145, 145, 129, 145,
    145, 129, 145, 144,  33,  10, 240, 240,  36,  81,  65,  65,
     65,  49,  97,  33,  97,  33,  97,  33,  97,  33,  97,  33,
     97,  33,  97,  33,  97,  49,  65,  65,  65,  84,   0,   6,
     96,  20,   9, 240, 241,  84, 129, 129, 129, 129, 129, 129,
    129, 129, 129, 129, 129,  87,   0,   5, 112,  26,  10, 240,
    240,  36,  66,  50,  49,  97,  33,  97,  33,  97, 145, 129,
    129, 129, 129, 129, 129, 129,  97,  40,   0,   6,  64,  27,
     11, 240, 240, 100,  82,  65,  65,  97,  49,  97, 145, 145,
    100, 178, 162, 161,  49,  97,  34,  97,  49,  81,  85,   0,
      7,  48,  28,  11, 240, 240, 145, 161, 146, 129,  17, 113,
     33, 113,  33,  97,  49,  81,  65,  81,  65,  65,  81,  73,
    129, 161, 133,   0,   7,  16,  28,  10, 240, 240,  17,  65,
     69,  81, 145, 145,  19,  82,  49, 161, 145, 145,  34,  81,
     34,  81,  33,  97,  49,  65,  84,   0,   6,  96,  32,  10,
    240, 240,  52,  81,  65,  49,  66,  33, 145,  35,  67,  49,
     50,  81,  33,  97,  33,  97,  33,  97,  33,  97,  49,  65,
     65,  65,  84,   0,   6,  96,  22,  10, 240, 240,  17, 151,
     33,  97,  33,  81, 129, 145, 129, 145, 129, 145, 145, 145,
    145, 145,   0,   7,  32,  11, 240, 240,  84,  97,  65,  81,
     81,  65,  81,  65,  81,  82,  33, 115, 113,  34,  81,  66,
     49,  98,  33, 113,  33,  97,  65,  66,  84,   0,   7,  64,
     31,  10, 240, 240,  36,  81,  65,  49,  81,  49,  97,  33,
     97,  33,  97,  33,  97,  49,  51,  67,  33, 145, 129,  49,
     81,  49,  65,  84,   0,   6, 112,  11,   4, 240, 240,  34,
     34, 240, 114,  34, 240, 112,  14,   4, 240, 240,  34,  34,
    240, 114,  34,  49,  49,  33,  49, 112,  17,   4, 240, 146,
     34, 161,  49,  49,  50,  34,  34,  34,  34,  34,  34,  34,
     96,  11,  16,   0,  18,  14,   0,   6,  46,   0,  16,  32,
     23,   9,   0,   7,   2, 114, 240,  33, 129, 129, 129, 113,
    129, 113, 113, 129,  81,  33,  81,  34,  65,  53, 192,  24,
      9, 180,  65,  49,  49,  81,  33,  81,  33,  81, 129, 113,
    113, 113, 129, 129, 129, 240, 162, 114,   0,   6,  32,  54,
     16, 240, 100, 162,  66, 113, 129,  81,  52,  49,  65,  34,
     33,  49,  49,  49,  66,  33,  33,  33,  97,  33,  33,  33,
     97,  33,  33,  33,  97,  33,  33,  33,  97,  33,  33,  49,
     81,  33,  49,  34,  50,  33,  49,  52,  34,  81, 240,  18,
     98, 134,   0,  10,  80,  33,  16, 240, 129, 241, 227, 211,
    193,  33, 193,  34, 177,  34, 161,  65, 161,  66, 129,  82,
    151, 129,  98, 113,  98,  97, 129,  97, 130,  52, 100,   0,
     10,  32,  32,  14, 240, 240, 202,  97,  98,  81, 113,  81,
    114,  65, 113,  81,  97, 104,  97,  98,  81, 114,  65, 129,
     65, 129,  65, 129,  65,  98,  58,   0,   9,  32,  31,  15,
      0,   6,  21,  49,  82,  65,  33,  65, 115,  49, 146,  33,
    177,  33, 177,  33, 225, 225, 225, 177,  49, 161,  65, 129,
     98,  81, 134,   0,  10,  33,  15, 240, 240, 249, 129,  98,
     97, 114,  81, 129,  81, 145,  65, 145,  65, 145,  65, 145,
     65, 145,  65, 145,  65, 129,  81, 129,  81,  98,  73,   0,
     10,  16,  31,  15, 240, 240, 252,  81, 129,  81, 129,  81,
    145,  65,  81, 129,  81, 135, 129,  81, 129,  81, 129, 225,
    145,  65, 145,  65, 130,  44,   0,   9,  96,  27,  14, 240,
    240, 204,  65, 129,  65, 129,  65, 209,  81, 113,  81, 119,
    113,  81, 113,  81, 113, 209, 209, 209, 182,   0,   9,  96,
     30,  15,   0,   6,  21, 145,  81,  17,  81, 114,  65, 145,
     49, 161,  49, 225, 225, 225, 117,  49, 145,  65, 145,  81,
    129,  98,  82, 118,   0,  10,  34,  15, 240, 240, 245,  53,
     65, 113,  97, 113,  97, 113,  97, 113,  97, 113, 105,  97,
    113,  97, 113,  97, 113,  97, 113,  97, 113,  97, 113,  69,
     53,   0,   9,  80,  20,   7, 240, 101,  65,  97,  97,  97,
     97,  97,  97,  97,  97,  97,  97,  97,  69, 240, 240, 112,
     22,   9, 240, 244, 113, 129, 129, 129, 129, 129, 129, 129,
    129, 129,  50,  49,  50,  34,  68,   0,   6,  16,  35,  16,
      0,   6,   5,  83,  81, 113, 113,  97, 129,  81, 145,  65,
    161,  49, 177,  34, 179,  33, 161,  66, 145,  82, 129,  97,
    129, 113, 113, 114,  69,  69,   0,  10,  32,  24,  12, 240,
    240, 101, 145, 177, 177, 177, 177, 177, 177, 177, 177, 177,
     97,  65,  97,  65,  82,  42,   0,   7,  96,  54,  18,   0,
      6, 100, 147,  67, 114,  97,  17,  97,  17,  97,  17,  97,
     17,  97,  18,  81,  17,  97,  33,  65,  33,  97,  33,  65,
     33,  97,  34,  49,  33,  97,  49,  33,  49,  97,  50,  17,
     49,  97,  66,  65,  97,  66,  65,  97,  66,  65,  69, 101,
      0,  11,  64,  43,  16,   0,   6,   4,  85,  67,  97,  97,
     18,  81,  97,  18,  81,  97,  34,  65,  97,  49,  65,  97,
     50,  49,  97,  66,  33,  97,  81,  33,  97,  82,  17,  97,
     99,  97, 114,  97, 114,  69,  97,   0,  10,  64,  33,  15,
      0,   6,  21, 130,  82,  97, 113,  81, 145,  49, 177,  33,
    177,  33, 177,  33, 177,  33, 177,  33, 177,  49, 145,  81,
    113,  98,  82, 133,   0,  10,  16,  26,  13, 240, 240, 153,
     97,  97,  81, 113,  65, 113,  65, 113,  65,  97,  87,  97,
    193, 193, 193, 193, 193, 165,   0,   9,  16,  41,  15,   0,
      6,  21, 146,  66,  97, 129,  65, 145,  49, 177,  33, 177,
     33, 177,  33, 177,  33, 177,  49, 161,  49,  66,  49,  81,
     33,  33,  17, 115,  49, 165, 225,  33, 177,  33, 195, 194,
    240,  48,  33,  17,   0,   6,  57, 161,  97, 145, 113, 129,
    113, 129, 113, 129,  97, 151, 161,  67, 145,  82, 145,  97,
    145,  98, 129,  98, 129,  98,  49,  37,  84,   0,  11,  29,
     11, 240, 240,  84,  97,  66,  49,  97,  49,  97,  49, 162,
    180, 163, 162,  33, 113,  33, 113,  33, 113,  35,  65,  49,
     36,   0,   7,  48,  29,  15, 240, 240, 253,  34,  65,  66,
     33,  81,  81,  33,  81,  81,  33,  81,  81, 129, 225, 225,
    225, 225, 225, 225, 225, 197,   0,  10,  16,  34,  16,   0,
      6,   5,  69,  65, 129,  97, 129,  97, 129,  97, 129,  97,
    129,  97, 129,  97, 129,  97, 129,  97, 129,  97, 129, 113,
     97, 130,  66, 164,   0,  10, 112,  30,  16,   0,   6,   4,
    115,  65, 145,  81, 129,  98, 113, 113,  97, 130,  81, 145,
     65, 162,  49, 162,  33, 193,  33, 194,  17, 210, 226,   0,
     13,  48,  22,   0,   8,  36,  68,  83,  50,  98, 113,  81,
    113,  97,  98,  83,  81, 113,  83,  65, 129,  65,  33,  65,
    130,  49,  34,  49, 145,  49,  34,  33, 161,  33,  65,  33,
    162,  17,  66,  17, 178,  98, 194,  98, 194,  98,   0,  17,
     48,  33,  16,   0,   6,   5,  68,  82,  97, 129,  81, 161,
     65, 162,  33, 195, 226, 209,  17, 209,  18, 177,  50, 145,
     82, 113, 113, 113, 114,  68,  85,   0,  10,  32,  32,  17,
      0,   6,  53, 100,  66, 129, 113, 113, 145,  81, 162,  65,
    177,  49, 209,  17, 227, 241, 240,  17, 240,  17, 240,  17,
    240,  17, 229,   0,  11,  64,  27,  12, 240, 240, 106,  34,
     97,  49,  98,  49,  97, 161, 162, 161, 161, 162, 161, 161,
     97,  49, 113,  49,  98,  42,   0,   7,  96,  24,   5,  83,
     33,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,
     65,  65,  65,  65,  65,  65,  65,  67,  32,  16,   8, 240,
    161,  33,  49,  33,  65,  33,  66,  19,  34,  34,   0,  14,
     32,  24,   5,  83,  65,  65,  65,  65,  65,  65,  65,  65,
     65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  35,
     32,   8,   6, 240,  65,  65,  18,   0,  13,   7,   3, 145,
     33,   0,   6,  80,  10,   5, 240,  17,  49,  65,  67,  50,
      0,   9,  25,  12,   0,  12,  21, 113,  50,  97,  65, 132,
     98,  49,  81,  81,  81,  81,  33,  33,  66,  33,  52,  34,
      0,   7, 112,  29,  11, 240, 240,  50, 161, 161, 161, 161,
    161,  20,  82,  65,  65,  97,  49,  97,  49,  97,  49,  97,
     49,  97,  50,  65, 100,   0,   7,  48,  18,   9,   0,   9,
     36,  65,  65,  33,  81,  33, 129, 129, 145, 130,  33,  84,
      0,   6,  30,  11, 240, 240, 131, 161, 161, 161, 161,  84,
     17,  65,  66,  50,  81,  49,  97,  49,  97,  49,  97,  49,
     97,  65,  66,  84,  18,   0,   7,  16,  20,   9,   0,   9,
     35,  81,  49,  49,  81,  39,  33, 129, 129,  81,  49,  49,
     83,   0,   6,  16,  23,   8, 179,  81,  17,  65,  33,  65,
    113, 113, 113,  85,  81, 113, 113, 113, 113, 113, 113, 100,
    240, 240, 208,  27,  12,   0,  12,  40,  50,  49,  97,  65,
     98,  49, 113,  34,  97,  19, 113, 177, 198,  81,  98,  33,
    129,  34,  98,  70, 240,  16,  30,  11, 240, 240,  50, 161,
    161, 161, 161, 161,  20,  82,  65,  65,  81,  65,  81,  65,
     81,  65,  81,  65,  81,  65,  81,  52,  20,   0,   7,  16,
     16,   5, 242,  50, 240,  50,  65,  65,  65,  65,  65,  65,
     65,  51, 240, 192,  22,   7, 240, 146,  82, 240, 163,  97,
     97,  97,  97,  97,  97,  97,  97,  97,  33,  49,  33,  33,
     66, 176,  30,  11, 240, 240,  50, 161, 161, 161, 161, 161,
     52,  49,  49,  97,  33, 113,  18, 114,  17, 113,  49,  97,
     65,  81,  66,  51,  36,   0,   7,  16,  18,   5, 242,  65,
     65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  65,  51,
    240, 192,  34,  17,   0,  17,   2,  20,  36,  82,  66,  65,
     65,  81,  81,  65,  81,  81,  65,  81,  81,  65,  81,  81,
     65,  81,  81,  65,  81,  81,  52,  21,  20,   0,  10, 112,
     25,  11,   0,  11,   2,  20,  82,  65,  65,  81,  65,  81,
     65,  81,  65,  81,  65,  81,  65,  81,  52,  20,   0,   7,
     16,  23,  10,   0,  10,  36,  81,  65,  49,  97,  33,  97,
     33,  97,  33,  97,  33,  97,  49,  65,  84,   0,   6,  96,
     28,  11,   0,  11,   2,  20,  82,  65,  65,  97,  49,  97,
     49,  97,  49,  97,  49,  82,  50,  50,  65,  20,  81, 161,
    161, 148, 240,  48,  26,  11,   0,  11,  36,  98,  50,  50,
     81,  49,  97,  49,  97,  49,  97,  50,  81,  65,  66,  84,
     17, 161, 161, 161, 132, 208,  18,   8,   0,   8,   2,  19,
     50,  33,  49, 113, 113, 113, 113, 113, 100, 240, 240, 224,
     20,   9,   0,   9,  20,  65,  65,  49, 130, 148,  49,  81,
     33,  81,  34,  50,  33,  20,   0,   6,  22,   9, 240, 240,
    129, 129, 129, 114, 103,  65, 129, 129, 129, 129,  49,  65,
     49,  65,  49,  83,   0,   6,  25,  11,   0,  11,   2,  51,
     65,  81,  65,  81,  65,  81,  65,  81,  65,  81,  65,  81,
     65,  66,  84,  18,   0,   7,  16,  21,  12,   0,  12,   4,
     51,  50,  81,  81,  65,  98,  49, 113,  33, 129,  33, 146,
    162,   0,   9,  96,  31,  15,   0,  15,   3,  35,  35,  49,
     65,  65,  66,  49,  65,  81,  33,  17,  33,  97,  33,  17,
     33, 114,  34,  17, 114,  50, 130,  50,   0,  11, 112,  23,
     12,   0,  12,   4,  51,  65,  65, 113,  33, 146, 162, 145,
     18, 113,  49, 113,  65,  67,  52,   0,   7,  96,  27,  12,
      0,  12,   3,  67,  49,  81,  97,  65,  97,  49, 129,  33,
    129,  17, 147, 161, 177, 177, 113,  33, 129,  33, 131, 240,
     96,  20,  10,   0,  10,   8,  33,  81,  49,  65, 129, 129,
    130, 129,  65,  49,  81,  40,   0,   6,  64,   8,  12,   0,
     15,  10,   0,  16,  96,   9,  22,   0,  27,  79,   5,   0,
     30,  64,  12,   7, 240, 113,  33,  33,  33,  49,  33,   0,
     14,  48,  10,   9, 240, 210,  49,  33,  35,   0,  19,  64,};

//*****************************************************************************
//
// The font definition for the 22 point Cm font.
//
//*****************************************************************************
const tFont g_sFontCm22 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    19,

    //
    // The height of the font.
    //
    22,

    //
    // The baseline of the font.
    //
    17,

    //
    // The offset to each character in the font.
    //
    {
           0,    5,   22,   38,   78,  119,  174,  217,
         227,  250,  272,  292,  313,  323,  331,  339,
         364,  397,  417,  443,  470,  498,  526,  558,
         580,  612,  643,  654,  668,  685,  696,  719,
         743,  797,  830,  862,  893,  926,  957,  984,
        1014, 1048, 1068, 1090, 1125, 1149, 1203, 1246,
        1279, 1305, 1346, 1379, 1408, 1437, 1471, 1501,
        1549, 1582, 1614, 1641, 1665, 1681, 1705, 1713,
        1720, 1730, 1755, 1784, 1802, 1832, 1852, 1875,
        1902, 1932, 1948, 1970, 2000, 2018, 2052, 2077,
        2100, 2128, 2154, 2172, 2192, 2214, 2239, 2260,
        2291, 2314, 2341, 2361, 2369, 2378, 2390,
    },

    //
    // A pointer to the actual font data
    //
    g_pui8Cm22Data
};
