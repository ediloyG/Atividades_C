#include <stdio.h>
#include <stdlib.h>
// 5)Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.


int main(){

int i, pares = 50, soma = 0;

    for(i =0; i < pares; i++){
        if (i % 2 == 0 )
        {
            soma += i;
        }
    }
    printf("resultado final = %d", soma);
return 0;
}