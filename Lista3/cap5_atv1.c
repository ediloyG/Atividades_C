#include <stdio.h>
#include <stdlib.h>
//1) Faça um programa que leia um número inteiro positivo N e imprima todos os numeros naturais de 0 até N em ordem crescente.

int main(){
int n, i;

    printf("Digite um numero para contarmos em ordem crescente ate ele : ");
    scanf("%d", &n);

    if(n < 0){
        printf("O numero não pode ser negativo");
    }else{
        for ( i = 0; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
return 0;
}
