/************************************************************************************//**
* \file         main.c
* \brief        BootCommander program source file.
* \ingroup      BootCommander
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2017  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
*
* \endinternal
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include <stdio.h>                          /* Standard I/O functions.                 */
#include "openblt.h"                        /* OpenBLT library.                        */


/****************************************************************************************
* Macro definitions
****************************************************************************************/
/* Program return codes. */
#define RESULT_OK                           (0u)


/************************************************************************************//**
** \brief     This is the program entry point.
** \param     argc Number of program arguments.
** \param     argv Array with program arguments.
** \return    Program return code. 0 for success, error code otherwise.
**
****************************************************************************************/
int main(int argc, char *argv[])
{
  int result = RESULT_OK;
  const uint8_t crcTestData[] = 
  {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x11, 0x54, 0xFE, 0xA1, 0x89, 0xFA, 0xA9, 0x12
  };
  
  (void)argc;
  (void)argv;

  /* Output info to the user. */
  printf("The library version number: %u\n", BltVersionGetNumber());
  printf("The library version string: %s\n", BltVersionGetString());
  /* Output CRC calculation results. */  
  printf("Test CRC16 value: %04xh\n", BltUtilCrc16Calculate(crcTestData, 16));
  printf("Test CRC32 value: %08xh\n", BltUtilCrc32Calculate(crcTestData, 16));

  /* Give result back. */
  return result;
} /*** end of main ***/


/*********************************** end of main.c *************************************/

 
