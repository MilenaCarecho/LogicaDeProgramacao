/** Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e
tamb�m o imprima. **/


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

