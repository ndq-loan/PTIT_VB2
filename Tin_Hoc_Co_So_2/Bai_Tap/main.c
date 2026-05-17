#include <stdio.h>
#include <stdlib.h>

// init default value
int myNumber  = 15;				// 2~4 byte
float myFloat = 11.123;			// 4 byte
double myDouble = 85.456;		// 4 byte
char myChar   = 'D';			// 1 byte
char myTextArray[] = "Hello";
int myIntArray[] = {1,2,3};
char arr_1[10] 	  = "Abc";
char arr_2[1] 	  = "Abc";
	
// import files 
#include "baitap_1.c"

#include "practice_print.c"
#include "practice_loop.c"
#include "practice_setvalue.c"
 
void main() {
	/* Bai tap */
	sumValue1(7); // baitap_1.c
	sumValue1(7); // baitap_1.c
	
	/*Luyen tap */ 
	doLoop();		// practice_loop.c
	printData(); 	// practice_print.c
	changeValue();	// practice_setvalue.c
}
