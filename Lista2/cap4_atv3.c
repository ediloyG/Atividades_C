#include <stdio.h>
#include <stdlib.h>
//3) Faça um programa que leia um número inteiro e verifique se esse númeroé par ou ímpar.
int main(){

int numero;

    printf("Digite um numero inteiro para verificase se eh par ou impar:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0 )
    {
        printf("o numero %d eh par", numero);
    }else{
        printf("o numero %d eh impar", numero);
    }
    
    return 0;
}