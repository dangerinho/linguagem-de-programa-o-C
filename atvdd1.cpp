#include <stdio.h>
#include <iostream>
#include <stdlib.h>
int main ()
{
//variavel//

	float benio;
	float pogg;	
	float satur;

//codigo//
 printf ("---------------\n");
 printf ("digite 3 notas:\n");
 printf ("---------------\n");

 printf ("digite a primeira:\n");

 scanf ("%f",& benio);
 
 printf ("digite a segunda:\n");
 
 scanf ("%f",& pogg);
 
 printf ("digite a terceira:\n");
 
 scanf ("%f",& satur);
 
 printf ("o resultado: %f\n",(benio + pogg + satur)/3);
 
} 