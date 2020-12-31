/** Faça um programa que leia um número inteiro e o imprima, então leia um número real e
também o imprima. **/


#include <stdio.h>
int main () {
int nint;
float nreal;

printf("Digite um numero inteiro:\n");
scanf("%i", &nint);
printf("Digite um numero real:\n");
scanf("%f", &nreal);

printf("\nO numero inteiro eh %i e o numero real eh %.2f", nint, nreal);
}

