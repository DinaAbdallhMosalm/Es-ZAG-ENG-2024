/* 
 * File:   mcal-std-types.h
 * Author: User
 *
 * Created on April 21, 2024, 2:00 PM
 */

#ifndef MCAL_STD_TYPES_H
#define	MCAL_STD_TYPES_H


/*-----------section : includes--------*/

#include "std-libraries.h"
#include "compilor.h"

/*----------section: Macro Declaration----*/
#define  STD_HIGH        0x01
#define  STD_LOW         0x00


#define  STD_ON          0x01
#define  STD_OFF          0x00
#define  STD_ACTIVE       0x01
#define  STD_IDLE         0x00

/*----------section: Macro Function Declaration----*/

/*----------section: Data Type Declaration----*/
typedef unsigned char uint8 ;

typedef uint8 Std_ReturnType ;

#define E_OK                    (Std_ReturnType)0x01 
#define E_NOT_OK                (Std_ReturnType)0x00 

/*----------section: Function Declaration----*/


#endif	/* MCAL_STD_TYPES_H */

