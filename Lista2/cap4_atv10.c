#include <stdio.h>
#include <stdlib.h>

/*
10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e
mostrado na tabela a seguir:


*/
int main(){

    int escolha;
    float x,y,z, resultado;

    printf("Escolha valores de x y e z\n");
    scanf("%f %f %f", &x,&y,&z);

    printf("Escolha uma media aritimetica:");
    printf(" 1 - media | 2 - ponderada | 3 - harmonica | 4 -aritmetica\n ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        resultado =  x * y * z;
        break;
    case 2:
        resultado = (x + 2 * y + 3 * z) / 6;
        break;
    case 3:
        resultado = 1 / ((1 / x) + (1 / y) + (1 / z));
        break;
    case 4:
        resultado = (x + y +z) / 3;    
        break;
    default:
        printf("Numero escolhi invalido\n");
        return 0;
    }
    
    printf("O valor de media eh : %.2f", resultado);

    return 0;
}