#include <stdio.h>
#include <stdlib.h>
/* 11) Faça um algoritmo que leia um número positivo e imprima seus divisores. 
Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33
e 66.*/

int main(){

    int numero,i;

    printf("Digite um numero positivo\n");
    scanf("%d", &numero);

    if(numero <=0){
    
    printf("numero não é inteiro");

    return 0;

    }

    printf("Os divisores do numero %d sao: ", numero);
    for(i = 1; i <= numero; i++){
        if (numero % i == 0){
            printf("%d,",i);
        }
    }
}