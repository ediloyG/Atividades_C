#include <stdio.h>
#include <stdlib.h>
#define  pi 3.141592
/*Leia o valor do raio de um círculo. Calcule e imprima a área do
círculo correspondente. A área do círculo é A = π* raio2, sendo π =
3.141592
*/
int main(){

  float area, raio, altura, volume;

  printf("Insira o raio do circulo para saber a area\n");
  scanf("%f",&altura);

  printf("Insira o raio do circulo para saber a area\n");
  scanf("%f",&raio);

  volume = pi * raio * raio * altura;

  printf("o volume eh %.2f", volume);
  
  return 0;
}