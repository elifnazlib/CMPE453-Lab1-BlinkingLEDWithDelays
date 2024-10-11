#include <avr/io.h>		// Header file for the AVR Microcontroller.
#include <util/delay.h>		// Header file for the delay function.

int main(void) {

DDRD = 0b01001000;		// Set the Data Direction Register D to output on necessary pins.
DDRB = 0b00000010; 		// Set the Data Direction Register B to output on necessary pins.

while (1) {			// Infinite loop to keep the program running.
	
    PORTD = 0b01001000;		// ON all the LEDs
    PORTB = 0b00000010;		// together and
    _delay_ms(3000);		// wait for 3000ms 

    PORTD = 0b01000000;		// OFF the red and yellow LEDs
    PORTB = 0b00000000;		// and ON the blue LED together
    _delay_ms(4000);		// and wait for 4000ms

    PORTD = 0b00001000;		// OFF the blue LED and 
    PORTB = 0b00000010;		// ON the yellow and red LEDs 
    _delay_ms(5000);		// together and wait for 5000ms

    PORTD = 0b00000000; 	// OFF all the 
    PORTB = 0b00000000;		// LEDs and wait 
    _delay_ms(2000);		// for 2000ms

				// Return to the beginning
  } 

  return 0; 
}
