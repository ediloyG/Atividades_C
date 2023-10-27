#include <stdio.h>
#include <stdlib.h>
/* 15) Elabore um programa que faça a leitura de vários números inteiros até
que se digite um número negativo. O programa tem de retornar o maior e o
menor número lido.
*/


int main() {
    int numero, maior, menor;

    printf("Digite um numero inteiro (digite um numero negativo para encerrar): ");
    scanf("%d", &numero);

    maior = menor = numero;

    while (numero >= 0) {

        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        printf("Digite outro numero inteiro (digite um numero negativo para encerrar): ");
        scanf("%d", &numero);
    }

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);

    return 0;
}
