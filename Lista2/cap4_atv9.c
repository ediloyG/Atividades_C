#include <stdio.h>
#include <stdlib.h>

/*
9)  Faça um programa que leia a altura e o peso de uma pessoa. 
De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa.

altura                           peso
                ate 60      entre 60- 90        acima 90
menor que 1,20   A              D                  G 
1,20 - 1,70      B              E                  H 
maior que 1,70   C              F                  I 


*/
int main(){

    float peso,altura;

    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    printf("Digite sua altura");
    scanf("%f",&altura);

   if (altura < 1.20) {
        if (peso <= 60) {
            printf("Voce esta na classificacao A.\n");
        } else if (peso <= 90) {
            printf("Voce esta na classificacao D.\n");
        } else {
            printf("Voce esta na classificacao G.\n");
        }
   }else if (altura <=1.20 && altura >=1.70)
   {
    if (peso <= 60) {
            printf("Você está na classificacao B.\n");
        } else if (peso <= 90) {
            printf("Voce esta na classificacao E.\n");
        } else {
            printf("Voce esta na classificacao H.\n");
        }
   }else if (altura >=1.70)
   {
    if (peso <= 60) {
            printf("Voce esta na classificacao C.\n");
        } else if (peso <= 90) {
            printf("Voce estana classificacao F.\n");
        } else {
            printf("Voce esta na classificacao I.\n");
        }
   }
    return 0;

}