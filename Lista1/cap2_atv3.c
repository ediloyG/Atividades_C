#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia três valores inteiros e mostre sua
soma.

*/
int main(){

    int num1, num2, num3, soma;

    printf("Digite tres numero para some");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;

    printf("Aqui esta a soma: %d", soma);

    return 0;
}