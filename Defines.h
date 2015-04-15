/*
 * Defines.h
 *
 * Created: 10/04/2015 14:18:29
 *  Author: Dries
 */ 


#ifndef DEFINES_H_
#define DEFINES_H_

//TESTERS

//General
#define F_CPU2 16000000UL        //Says to the compiler which is our clock frequency, permits the delay functions to be very accurate

//UART
#define BAUDRATE 9600        //The baudrate that we want to use
#define BAUD_PRESCALLER (((F_CPU2 / (BAUDRATE * 16UL))) - 1)    //The formula that does all the required maths


//SUARTBluetooth
#define bit9600Delay 84


#endif /* DEFINES_H_ */