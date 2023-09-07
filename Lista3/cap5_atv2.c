#include <stdio.h>
#include <stdlib.h>
//2) Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

int main(){
int n, i;

    printf("Digite um numero para contarmos em ordem descrecente ate ele : ");
    scanf("%d", &n);

    if(n < 0){
        printf("O numero não pode ser negativo");
    }else{
        for ( i = n; i >= 0; i--)
        {
            printf("%d\n", i);
        }
    }
return 0;
}
