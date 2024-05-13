#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main ()
{
	//variavel//
	char popg;
	char deg;
    int pdo;
    float goi;
    
    //comandos//
printf ("escreva seu nome abaixo:\n");
scanf ("%s",& popg);
printf ("quanto custa o produto? \n");
scanf ("%f",& goi);
printf ("deseja comprar quantos prodrutos?:\n");
scanf ("%d",& pdo);
printf ("voce adquiriu %d produtos por %f \n",pdo,goi*pdo);
printf ("parabens voce e o primeiro cliente do dia e ira receber um premio \n");
printf ("o seu premio e de %f \n",(goi * pdo)* (goi * pdo) );

















}