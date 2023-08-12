#include <stdio.h>
#include <stdlib.h>

/*Leia uma velocidade em km/h (quilômetros por hora) e apresente
convertida em m/s (metros por segundo). A fórmula de conversão é M =
K/36, sendo K a velocidade em km/h e M em m/s
*/
int main(){

float km, ms;

  printf("Digite a velocidade em km/h: ");
  scanf("%f", &km);

  ms = km / 3.6;

  printf("A velocidade %.2f km/h equivale a %.2f m/s.\n", km, ms);

  return 0;
}