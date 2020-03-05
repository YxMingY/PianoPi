#include <iostream>
#include "piano.h"
#include <wiringPi.h>
int playstar();
int main()
{
        int on=24;

        wiringPiSetup();
        pinMode(on,INPUT);
        while(1){
                //printf("%d\n",digitalRead(on));
                if(digitalRead(on)){
                        playstar();
                }
                delay(10);
        }
        return 0;
}
int playstar()
{
	Piano p(25,250);
	p.play(do1)
		.play(do1)
		.play(so1)
		.play(so1)
		.play(la1)
		.play(la1)
		.play(so1,d2)
		.play(fa1)
		.play(fa1)
		.play(mi1)
		.play(mi1)
		.play(re1)
		.play(re1)
		.play(do1,d2)
		.play(so1)
		.play(so1)
		.play(fa1)
		.play(fa1)
		.play(mi1)
		.play(mi1)
		.play(re1,d2)
		.play(so1)
		.play(so1)
		.play(fa1)
		.play(fa1)
		.play(mi1)
		.play(mi1)
		.play(re1,d2)
		.play(do1)
		.play(do1)
		.play(so1)
		.play(so1)
		.play(la1)
		.play(la1)
		.play(so1,d2)
		.play(fa1)
		.play(fa1)
		.play(mi1)
		.play(mi1)
		.play(re1)
		.play(re1)
		.play(do1,d2);

}
