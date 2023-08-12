#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um valor em reais e a cotação do dólar. Em
seguida, imprima o valor correspondente em dólares
*/
int main(){

float real, valor;
float dollar = 4.91;

  printf("Valor dollar hoje: %.2f\n", dollar);
  printf("Insira um valor para conversao:\n ");
  scanf("%f", &real);

  valor = real * dollar;

  printf("O seu valor convertid eh: %.2f", valor);

  return 0;
}