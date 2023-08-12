#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número inteiro e retorne seu antecessor e
seu sucessor.
*/
int main(){

    int NumInicio, NumSucessor, NumAntecessor;

    printf("Digite um numero para saber o sucessor e antecessor\n");
    scanf("%d",&NumInicio);

    NumSucessor   = NumInicio + 1;
    NumAntecessor = NumInicio - 1; 

    printf("Aqui esta o sucessor\n");
    printf("%d\n",NumSucessor);

    printf("Aqui esta o antecessor\n");
    printf("%d", NumAntecessor);

    return 0;
}