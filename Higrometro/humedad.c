/*
 * Cruz Varela Karen Guerlain
 * Ejercicio en C
 * Sensor de humedad (digital) envia 1 o 0
 * Si envia 0, la tierra esta seca, encender led rojo
 * Si envia 1, hay humedad, encender led verde
 * 
 * */

#include <stdio.h>
#include <wiringPi.h>

int main(void)
{
	int ledVerde = 22;
	int ledRojo = 0;
	int sensor = 6;
	wiringPiSetup() ;
	pinMode(ledVerde, OUTPUT) ;
	pinMode(ledRojo, OUTPUT) ;
	for (;;)
	{
		if(digitalRead(sensor) == 0){
			digitalWrite(ledVerde, HIGH) ; delay (500) ;
			digitalWrite(ledRojo,  LOW) ; delay (500) ;
			printf("1. Hay humedad\n");
			}
		else{
			digitalWrite(ledRojo,  HIGH) ; delay (500) ;
			digitalWrite(ledVerde,  LOW) ; delay (500) ;
			printf("0. No hay humedad\n");
			}
	}
	return 0;
}


