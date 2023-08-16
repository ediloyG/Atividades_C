#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
5)  Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.
*/
int main(){

    float numero, resultQuadrado, resultRaiz ;

    printf("insira um valor positivo:\n");
    scanf("%f", &numero);

    if (numero > 0)
    {
        resultQuadrado = (numero * numero);
        resultRaiz = sqrt(numero);

        printf("o valor do numero ao quadrado: %.2f e a raiz quadrada %.2f", resultQuadrado, resultRaiz);

    }else{
        printf("o valor nao eh inteiro");

    }  

    return 0;
}