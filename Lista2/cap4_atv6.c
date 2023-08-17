#include <stdio.h>
#include <stdlib.h>
/*
6)  Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7

*/
int main(){

    float altura, peso_ideal;
    char sexo;

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu sexo, 'M' para masculino e 'F' para feminino:\n");
    scanf(" %c", &sexo);

    switch (sexo)
    {
    case 'M':
        peso_ideal = (72.7 * altura) - 58;
        break;
    case 'F':
        peso_ideal = (62.1 * altura) - 44.7;
        break;
    default:
        printf("digite M ou F");
        return 1;
        break;
    }

    printf("seu peso ideal eh %.2f",peso_ideal);
    return 0;
}