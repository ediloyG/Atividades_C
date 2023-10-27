#include <stdio.h>
#include <stdlib.h>
/* 12) Escreva um programa que leia um número inteiro e calcule a soma de
todos os divisores desse número, com exceção dele próprio. Exemplo: A
soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
e 66.*/

int main(){

    int numero,i;
    int soma = 0;

    printf("Digite um numero positivo\n");
    scanf("%d", &numero);

    if(numero <=0){
    
    printf("numero não é inteiro");

    return 0;

    }

    printf("Os divisores do numero %d sao: ", numero);
    for(i = 1; i < numero; i++){
        if (numero % i == 0){
            soma +=i;
        }
    }

    printf("A soma e %d", soma);
}