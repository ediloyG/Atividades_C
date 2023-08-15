#include <stdio.h>
#include <stdlib.h>
#define  pi 3.141592
/*Leia um ângulo em graus e apresente-o convertido em radianos. A
fórmula de conversão é R = G * π/180, sendo G o ângulo em graus e R em
radianos e π = 3.141592
*/
int main(){

float graus, radianos;

  printf("Insira o angulo em graus\n");
  scanf("%f", &graus);

  radianos = graus * (pi/180);

  printf("O angulo com grau %.1f temo o raio %.4f", graus, radianos );
  
  return 0;
}