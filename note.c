#include <wiringPi.h>
#ifndef PIANO_NOTE
#define PIANO_NOTE
/**
 * @param int freq - frequency
 * @param int time - unit:millisecond
 * $param int pin
*/
void bell(int freq,int pin,int time=500)
{
	int i,delay_t;
	digitalWrite(pin,LOW);
	time = (int)(1000000*time/1000.0/2);
	delay_t = time/freq;
	for(i=0;i<freq;i++) {
		digitalWrite(pin,HIGH);
		delayMicroseconds(delay_t);
		digitalWrite(pin,LOW);
		delayMicroseconds(delay_t);
	}
}
#endif
