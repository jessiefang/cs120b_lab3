/*	Author: yfang038
 *  Partner(s) Name: none
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #5
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRB = 0xFE; PORTB = 0x01;
	DDRD = 0x00; PORTD = 0xFF;
	unsigned short total = 0x0000;
	unsigned char output = 0x00;
    /* Insert your solution below */
    while (1) {
    	total = (PIND << 1) | (PINB & 0x01);
	if(total >= 70){
		output = 0x02;
	}
	else if(total > 5){
		output = 0x04;
	}
	else{
		output = 0x00;
	}
	PORTB = output;
    	output = 0x00;
    }    
    return 1;
}
