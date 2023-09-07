#include <stdio.h>
#include <stdlib.h>
// 10) Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.

int main(){

    int num, soma = 0, i=0, boo =0;
    float media;
    
    while (!boo){
        
        printf("\ndigite o %d numero:  ", i+1);
        scanf("%d", &num);
        soma += num;
        i++;
        
        if(num<0){
            printf("digita direito");
            i--;
        }
        else if (i == 10)
        {
            boo = 1;
        }        
    }

    media = soma/i;
    printf("%.2f", media);

    return 0;
}