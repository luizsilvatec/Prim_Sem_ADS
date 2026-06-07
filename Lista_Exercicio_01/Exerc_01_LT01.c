/*1. Construa um algoritmo que receba três números, calcule e mostre a multiplicação desses
números.*/

#include <stdio.h>
#include<stdlib.h>

void main(void){

float n1, n2, n3, resul;

printf("Digite um numero: ");
scanf("%f",&n1);
printf("Digite um numero: ");
scanf("%f",&n2);
printf("Digite um numero: ");
scanf("%f",&n3);

resul = (n1*n2*n3);

printf("\nO resultado da multiplicação e: %.2f\n", resul);

system("pause");
printf("\n\n");

}
