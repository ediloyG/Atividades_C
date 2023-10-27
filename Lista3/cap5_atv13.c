#include <stdio.h>
#include <stdlib.h>
/* 13) Faça um programa que exiba a soma de todos os números naturais abaixo
de 1.000 que são múltiplos de 3 ou 5.
*/

int main(){


    int i,soma = 0;

    for( i = 1; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0 ){
            soma += i;
        }
    }    
    printf("A soma dos numero naturis é %d",soma);
}