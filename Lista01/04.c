/** 4. Leia um número real e imprima a quinta parte deste número **/


#include <stdio.h>
int main () {
    float n, n5;
    printf("Insira um numero:");
    scanf("%f", &n);
    n5=n/5;
    printf("a quinta parte do numero %.2f eh %.2f", n, n5);
}

