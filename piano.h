#ifndef PIANO_H
#define PIANO_H
#include <wiringPi.h>
/**
 * The frequencies which the different notes have
 * unit: Hz
 */
enum note{
	do1=262,do2=523,do3=1046,
	re1=294,re2=578,re3=1175,
	mi1=330,mi2=659,mi3=1318,
	fa1=349,fa2=698,fa3=1397,
	so1=392,so2=784,so3=1568,
	la1=440,la2=880,la3=1760,
	si1=494,si2=988,si3=1976
};
/**
 * Notes of different lengths
 * for example: d4 means quarter note
 */
enum note_t{
	d1=1,d2=2,d4=4,d8=8,d16=16,d32=32
};
class Piano
{
public:
	Piano(int pin,int ms=500);
	void setPin(int pin);
	void setD4Time(int ms);
	Piano play(int note,int note_t=d4) const;
protected:
	int m_pin;
	int m_time;
};
#endif
