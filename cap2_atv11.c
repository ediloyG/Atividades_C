#include <stdio.h>
#include <stdlib.h>
#define  pi 3.141592
/*Leia o valor do raio de um círculo. Calcule e imprima a área do
círculo correspondente. A área do círculo é A = π* raio2, sendo π =
3.141592
*/
int main(){

  float area, raio;

  printf("Insira o raio do circulo para saber a area\n");
  scanf("%f",&raio);

  area = pi * raio * raio;

  printf("Area do circulo %.2f", area);
  return 0;
}