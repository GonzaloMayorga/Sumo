//============= MBCORP
//=== PICC simil Arduino
//=== Matias Leonardo Baez


#include <stdio.h>
#include <pic.h>
#include "delay.h"	//Retardos
#include "serial.h"	//Comunicacion Serial
#include "pap.h"	//Control PAP placa de entrenamiento
#include "hc595.h" //Control de buffers hc595
#include "srf04.h" //Deteccion con ultrasonico srf04
#include "funciones.h"	//Funciones como arduino

__CONFIG( XT & WDTDIS & UNPROTECT & PWRTEN );

//Configuracion de Puertos como entradas o salidas
char cont;
//El valor minimo para la velocidad es 10
void setup(void)
{
	cont=0;
	//delay(250);
	//delay(250);
	//delay(250);
	//delay(250);

	TRISA=0b11111111;
	pinMode(S7, OUTPUT);
	pinMode(S6, OUTPUT);
	pinMode(S5, OUTPUT);
	pinMode(S4, OUTPUT);
	pinMode(S3, OUTPUT);
	pinMode(S2, OUTPUT);
	pinMode(S1, OUTPUT);
}

//Bucle infinito
void adelante(){
	PORTB=0b10100101;

}

void atras(){
	PORTB=0b01011010;

}

void izquierda(){
 PORTB=0b01100110;				
}

void derecha(){
PORTB=0b10011001;
}

void stop(){
PORTB=0b00000000;
}

void loop(void)
{
adelante();
}
////===============NO TOCAR lo que sigue!!!!!!!!!

void main(void){
	
	TRISA = 0b00000000;
	TRISB = 0b00000000;

	setup();

	PORTA = 0b00000000;
	PORTB = 0b00000000;

//	INTCON=0;	// purpose of disabling the interrupts.

	while(1){
		loop();
	}
}
