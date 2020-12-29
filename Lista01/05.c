/** Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos **/


#include <stdio.h>
int main () {
    int n1,n2,n3,n1q,n2q,n3q,r;
    printf("Insira um numero:");
    scanf("%d", &n1);
    printf("Insira outro numero:");
    scanf("%d", &n2);
    printf("Insira o ultimo numero:");
    scanf("%d", &n3);
    n1q=n1*n1;
    n2q=n2*n2;
    n3q=n3*n3;
    r=n1q+n2q+n3q;
    printf("A soma do quadrado dos numeros eh %d", r);
}

