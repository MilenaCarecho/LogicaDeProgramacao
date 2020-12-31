/** Leia quatro notas, calcule a média aritmética e imprima o resultado **/


#include <stdio.h>
int main () {
float n1,n2,n3,n4,m;
    printf("Insira a nota da prova 1:");
    scanf("%f",&n1);
    printf("Insira a nota da prova 2:");
    scanf("%f",&n2);
    printf("Insira a nota da prova 3:");
    scanf("%f",&n3);
    printf("Insira a nota da prova 4:");
    scanf("%f",&n4);
    m=(n1+n2+n3+n4)/4;
    printf("Sua media aritimetica eh %.2f", m);

}

