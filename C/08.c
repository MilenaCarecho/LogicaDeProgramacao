/** Leia um número inteiro e imprima o seu antecessor e o seu sucessor **/


#include <stdio.h>
int main () {
    int n,a,s;
    printf("Insira um numero inteiro: ");
    scanf("%d", &n);
    a=n-1;
    s=n+1;
    printf("Numero:%d \nAntecessor:%d \nSucessor:%d", n,a,s);

}

