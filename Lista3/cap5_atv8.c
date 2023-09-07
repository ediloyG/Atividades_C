#include <stdio.h>
#include <stdlib.h>
// 7)Faça um programa que leia 10 inteiros e imprima sua média.


int main(){

    int i, numero, soma = 0;
    int cont = 1 ;

    for(i = 0; i < 10; i++){
        printf("digite %d numero: ", cont);
        scanf("%d", &numero);
        cont++;
        soma += numero;
    }
    printf("Resultado %d", soma);
    return 0;
}