/**  Efetue a leitura de um n�mero real e imprima o resultado do quadrado desse n�mero **/


#include <stdio.h>
int main () {
int n, nq;
    printf("Insira o numero:");
    scanf("%d", &n);
    nq = n*n;
    printf("O quadrado de %d eh %d", n, nq);
}

