#include <stdio.h>
#include <stdlib.h>

/*Leia um valor que represente uma temperatura em graus Celsius e
apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F =
C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
*/
int main(){

float temperaturaCelsius, temperaturaFahrenheit;

  printf("Insira a temperatura celsius\n");
  scanf("%f", &temperaturaCelsius);

  temperaturaFahrenheit = temperaturaCelsius * (9.0/5.0) + 32.0;

  printf("A temperatura %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", temperaturaCelsius, temperaturaFahrenheit);
  return 0;
}