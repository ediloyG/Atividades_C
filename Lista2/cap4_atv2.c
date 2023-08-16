#include <stdio.h>
#include <stdlib.h>
//1)Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, osdois números forem iguais, imprima a mensagem “Números iguais”.
int main(){

int numero1, numero2;

    printf("Vamos comprar dois numeros:\n");
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);
    
    if (numero1 == numero2)

        printf("numeros iguais",numero1,numero2);
    
    return 0;
}