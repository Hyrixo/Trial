#ifndef _main_h_
#define _main_h_

#include <avr\pgmspace.h>
#include <avr\io.h>
#include <avr\interrupt.h>
#include "mydefs.h"


#define	XTAL	16.00000e6
#define	BAUD	57600

#define F_CPU   XTAL
#include <util\delay.h>

#define	STXD		SBIT( PORTC, 1 )	// = OC1A
#define	STXD_DDR	SBIT( DDRC,  1 )

#define	SRXD_PIN	SBIT( PINC,  2 )	// = ICP


#endif
