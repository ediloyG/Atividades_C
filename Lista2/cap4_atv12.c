#include <stdio.h>
#include <stdlib.h>

/*
12) ) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
segunda-feira, se 2, e assim por diante.


*/
int main(){

    int dia;
    

    printf("Escolha o numero do dia semana, que informo qual dia da semana que eh");
    printf(" 1 - segunda | 2 - terca | 3 - quarta | 4 -quinta | 5 -sexta | 6 - sabado | 7 - domingo\n ");
    scanf("%d", &dia);

        switch (dia)
    {
    case 1:
        printf("Segunda -  Bora bill");
        break;
    case 2:
        printf("Terca -  cafezin ajuda");
        break;
    case 3:
        printf("Quarta - cafizn nao ajuda mais");
        break;
    case 4:
        printf("Quinta - amanha eh sexta");
        break;
    case 5:
        printf("Sexta - hoje eh sexta bora toma uma chima");
        break;
    case 6:
        printf("Sabado - Sabadou ");
        break;
    case 7:
        printf("Domingo - amanha eh segunda moio piah");
        break;
    default:
        printf("Numero escolhi invalido\n");
        return 1;
    }
    return 0;
}