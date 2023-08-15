#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia três valores inteiros e mostre sua
soma.

*/
int main(){

  float num1, num2, num3, num4, media;

    printf("Vamos calcular 4 numeros\n");
    
    printf("Insira o primeiro valor\n");
    scanf("%f", &num1);

    printf("Insira o segundo valor\n");
    scanf("%f", &num2);

    printf("Insira o terceiro valor\n");
    scanf("%f", &num3);

    printf("Insira o quarto valor\n");
    scanf("%f", &num4);

    media = ( num1 + num2 + num3 + num4) / 4;

    printf("A media desses valores eh: %f ", media);

    return 0;
}