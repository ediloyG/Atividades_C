#include <stdio.h>
#include <stdlib.h>
/*
7)  Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o
preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrará uma mensagem de erro.

ESTADO  MG SP  RJ  MS
IMPOSTO 7% 12% 15% 8%

*/
int main(){

    float valor_produto, valor_imposto, valor_total;
    int estado;

    printf("Digite o valor do produto: \n");
    scanf("%f", &valor_produto);

    printf("Digite o estado para calculo do imposto\n");
    printf(" 1 - MG | 2 - SP | 3 - RJ | 4 - MS \n");
    scanf("%d", &estado);

    switch (estado)
    {
    case 1:
        valor_imposto = valor_produto * 0.07;
        valor_total = valor_produto + valor_imposto;
        break;
    case 2:
        valor_imposto = valor_produto * 0.12;
        valor_total = valor_produto + valor_imposto;
        break;
    case 3:
        valor_imposto = valor_produto * 0.15;
        valor_total = valor_produto + valor_imposto;
        break;
    case 4:
        valor_imposto = valor_produto * 0.08;
        valor_total = valor_produto + valor_imposto;       
        break;
    default:
        printf("Digite um estado valido\n");
        return 1;
    }

    printf("O valor do produto com o imposto eh %.2f\n", valor_total);
    return 0;
}