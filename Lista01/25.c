/** Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos. **/


#include <stdio.h>
int main () {
int segundos, h, m, s, resto;

  printf("insira os segundos: ");
  scanf("%d",&segundos);

  h = segundos/3600;
  resto= segundos%3600;
  m=resto/60;
  s=resto%60;

  printf("%dh:%dm:%ds\n", h,m,s);

}



