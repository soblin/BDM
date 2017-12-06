/**
  CLC1 Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    clc1.c

  @Summary
    This is the generated driver implementation file for the CLC1 driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  @Description
    This source file provides implementations for driver APIs for CLC1.
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
#include "clc1.h"

/**
  Section: CLC1 APIs
*/

void CLC1_Initialize(void)
{
    // Set the CLC1 to the options selected in the User Interface

    // LC1G1POL inverted; LC1G2POL not_inverted; LC1G3POL not_inverted; LC1G4POL inverted; LC1POL inverted; 
    CLC1POL = 0x89;

    // LC1D2S LC3OUT; LC1D1S FOSC; 
    CLC1SEL0 = 0x64;

    // LC1D4S HFINTOSC; LC1D3S PWM4OUT; 
    CLC1SEL1 = 0x17;

    // LC1G1D3N disabled; LC1G1D2N disabled; LC1G1D4N disabled; LC1G1D1T disabled; LC1G1D3T disabled; LC1G1D2T disabled; LC1G1D4T disabled; LC1G1D1N disabled; 
    CLC1GLS0 = 0x00;

    // LC1G2D2N disabled; LC1G2D1N disabled; LC1G2D4N disabled; LC1G2D3N disabled; LC1G2D2T enabled; LC1G2D1T disabled; LC1G2D4T disabled; LC1G2D3T disabled; 
    CLC1GLS1 = 0x08;

    // LC1G3D1N disabled; LC1G3D2N disabled; LC1G3D3N disabled; LC1G3D4N disabled; LC1G3D1T disabled; LC1G3D2T disabled; LC1G3D3T enabled; LC1G3D4T disabled; 
    CLC1GLS2 = 0x20;

    // LC1G4D1N disabled; LC1G4D2N disabled; LC1G4D3N disabled; LC1G4D4N disabled; LC1G4D1T disabled; LC1G4D2T disabled; LC1G4D3T disabled; LC1G4D4T disabled; 
    CLC1GLS3 = 0x00;

    // LC1EN enabled; LCINTN disabled; LCINTP disabled; LC1MODE 4-input AND; LC1OE enabled; 
    CLC1CON = 0xC2;

}


bool CLC1_OutputStatusGet(void)
{
    return(CLC1CONbits.LC1OUT);

}
/**
 End of File
*/
