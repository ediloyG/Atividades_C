#include <stdio.h>
#include <stdlib.h>
//6)Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e apresente o resultado na tela.

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