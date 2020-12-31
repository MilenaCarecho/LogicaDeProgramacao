/** Peça ao usuário para digitar três valores inteiros e imprima a soma deles **/


#include <stdio.h>
int main () {
int n1,n2,n3, soma;
   printf("Insira um numero inteiro: ");
   scanf("%d", &n1);
   printf("insira mais um numero inteiro: ");
   scanf("%d", &n2);
   printf("Insira o ultimo numero inteiro: ");
   scanf("%d", &n3);
   soma=n1+n2+n3;

   printf("\n\nA soma dos numeros eh %d", soma);
}

