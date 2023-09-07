#include <stdio.h>
#include <stdlib.h>
//3) Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

int main(){
int n, i, numero;

    printf("Digite um numero para mostrarmos os numeros impares dele : ");
    scanf("%d", &n);

    if(n < 0){
        printf("O numero não pode ser negativo");
    }else{
        for( i = 0; i <= n; i++) {

        numero = i;

        if( numero % 2 == 1) {
            
        printf("\n- %d", numero);

        }
    }
    }
return 0;
}
