#include "piano.h"
#include <iostream>
using namespace std;
/**
 * To let the bell ring
 * @param int freq - frequency
 * @param int time - unit:millisecond
 * $param int pin
*/
void bell(int pin,int freq,int time=500)
{
	int i,delay_t;
	digitalWrite(pin,LOW);
	//A half note's microsecond time
	time = (int)(1000000*time/1000.0/2);
	//Each half waves' microsecond time 
	delay_t = 1000000/freq/2;
	//How many waves in total??
	freq = time/(double)delay_t;
	//Ring 3/4 time and sleep 1/4 time to make the note distinct
	freq *= 3/4.0;
	for(i=0;i<freq;i++) {
		digitalWrite(pin,HIGH);
		delayMicroseconds(delay_t);
		digitalWrite(pin,LOW);
		delayMicroseconds(delay_t);
	}
	delayMicroseconds(time/4);
}
Piano::Piano(int pin,int ms):m_pin(pin),m_time(ms)
{
	wiringPiSetup();
	pinMode(pin,OUTPUT);
}
void Piano::setPin(int pin)
{
	m_pin = pin;
}
/**
 * To set quarter note's time
 * @param int ms - unit:millisecond
 */
void Piano::setD4Time(int ms)
{
	m_time = ms;
}
/**
 * @param int note - enum note(which tone)
 * @param int note_t - enum nute_t(the time which the note continues)
 */
Piano Piano::play(int note,int note_t) const
{
	bell(m_pin,note,m_time*4/note_t);
	return *this;
}

