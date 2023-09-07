#include <stdio.h>
#include <stdlib.h>
// 9)Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

int main(){

   int num, maior = 0, menor = 0, i;

   for(i =0; i<10; i++){
        printf("\n digite o numero %d: ", i+1);
        scanf("%d", &num);

        if (menor == 0){
            menor = num;
        }
        else if(menor>num){
            menor = num;
        }
        else if(maior<num){
            maior= num;
        }
   }

    printf("\nmaior : %d,  menor: %d", maior, menor);
   
    return 0;
}