/**
  CLC2 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    clc2.c

  @Summary
    This is the generated driver implementation file for the CLC2 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  @Description
    This source file provides implementations for driver APIs for CLC2.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.55
        Device            :  PIC16F1509
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
*/

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/

#include <xc.h>
#include "clc2.h"

/**
  Section: CLC2 APIs
*/

void CLC2_Initialize(void)
{
    // Set the CLC2 to the options selected in the User Interface

    // LC2G1POL inverted; LC2G2POL not_inverted; LC2G3POL not_inverted; LC2G4POL inverted; LC2POL inverted; 
    CLC2POL = 0x89;

    // LC2D2S LC3OUT; LC2D1S FOSC; 
    CLC2SEL0 = 0x64;

    // LC2D4S LFINTOSC; LC2D3S PWM2OUT; 
    CLC2SEL1 = 0x07;

    // LC2G1D3N disabled; LC2G1D2N disabled; LC2G1D4N disabled; LC2G1D1T disabled; LC2G1D3T disabled; LC2G1D2T disabled; LC2G1D4T disabled; LC2G1D1N disabled; 
    CLC2GLS0 = 0x00;

    // LC2G2D2N disabled; LC2G2D1N disabled; LC2G2D4N disabled; LC2G2D3N disabled; LC2G2D2T enabled; LC2G2D1T disabled; LC2G2D4T disabled; LC2G2D3T disabled; 
    CLC2GLS1 = 0x08;

    // LC2G3D1N disabled; LC2G3D2N disabled; LC2G3D3N disabled; LC2G3D4N disabled; LC2G3D1T disabled; LC2G3D2T disabled; LC2G3D3T enabled; LC2G3D4T disabled; 
    CLC2GLS2 = 0x20;

    // LC2G4D1N disabled; LC2G4D2N disabled; LC2G4D3N disabled; LC2G4D4N disabled; LC2G4D1T disabled; LC2G4D2T disabled; LC2G4D3T disabled; LC2G4D4T disabled; 
    CLC2GLS3 = 0x00;

    // LC2EN enabled; LCINTN disabled; LCINTP disabled; LC2MODE 4-input AND; LC2OE enabled; 
    CLC2CON = 0xC2;

}


bool CLC2_OutputStatusGet(void)
{
    return(CLC2CONbits.LC2OUT);

}
/**
 End of File
*/
