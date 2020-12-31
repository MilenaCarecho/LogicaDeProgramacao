/** Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares **/


#include <stdio.h>
#include <math.h>
int main () {
    float dol, reais;
    printf("Insira o valor em reais R$");
    scanf("%f", &reais);
    dol=reais/5.21;
    printf("\nR$%.2f equivale a $%.2f", reais, dol);

}

