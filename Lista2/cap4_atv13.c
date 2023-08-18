#include <stdio.h>
#include <stdlib.h>

/*
13) Faça um programa que mostre ao usuário um menu com quatro opções de
operações matemáticas (as operações básicas, por exemplo). O usuário escolhe uma
das opções, e o seu programa pede dois valores numéricos e realiza a operação,
mostrando o resultado.


*/
int main(){

    int opcao;
    float resultado, num1, num2;
    

    printf("Escolha sua operação\n");
    printf(" 1 - Adicao | 2 - Subtracao | 3 - Multiplicacao | 4 - Divisao \n ");
    scanf("%d", &opcao);

    printf("Escolhar o primeiro numero\n");
    scanf("%f", &num1);
    printf("Escolhar o segundo numero\n");
    scanf("%f", &num2);

        switch (opcao)
    {
    case 1:
        resultado = num1 + num2;
        printf("O resultado da adicao eh; %.2f", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("O resultado da subtraco eh; %.2f", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("O resultado da multiplicao eh; %.2f", resultado);
        break;
    case 4:

        if (num2 != 0 )
        {
            resultado = num1 / num2;
            printf("O resultado da divisao eh; %.2f", resultado);
        }else{
            printf("Erro: divisao por zero nao e permitido");
        }

        break;

    default:
        printf("Numero escolhi invalido\n");
        return 1;
    }
    return 0;
}