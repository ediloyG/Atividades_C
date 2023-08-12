#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  pi 3.141592
/* Sejam a e b os catetos de um triângulo cuja hipotenusa h 
Faça um programa que leia os valores de a e b, e calcule o valor da
hipotenusa através da fórmula dada. Imprima o resultado.
*/
int main(){

  float catetoA, catetoB, hipotenusa;

  printf("Insira o valor do cateto A\n");
  scanf("%f",&catetoA);

  printf("Insira o valor do cateto B\n");
  scanf("%f",&catetoB);

  hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);

  printf("o valor da hipotenusa eh %.2f", hipotenusa);
  
  return 0;
}