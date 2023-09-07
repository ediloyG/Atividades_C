#include <stdio.h>
#include <stdlib.h>
// Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostre uma mensagem “FIM!” após a contagem.

int main(){

    int i,cont =0;

    for(i = 10; i>=cont; i--){

        printf("%d\n", i);
    }
    printf("FIM");
    return 0;
}