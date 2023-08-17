#include <stdio.h>
#include <stdlib.h>

/*
8)  Escreva um programa que, dada a idade de um nadador, classifique-o em uma das
seguintes categorias:
infantil A 5-7
infantil B 8-10
juvenil  A 11-13
juvenil  B 14-17
senior   maiores de 18
*/
int main(){

    int idade;

    printf("Digite sua idade nadador:\n");
    scanf("%d", &idade);

    if ( idade >=5 && idade <= 7)
    {
        printf("O nadador esta na categoria Infantil A\n");
    }else if (idade >=8 && idade <= 10)
    {
        printf("O nadador esta na categoria Infantil B\n");
    }else if (idade >=11 && idade <= 13)
    {
        printf("O nadador esta na categoria Juvenil A\n");
    }else if (idade >=14 && idade <= 17)
    {
        printf("O nadador esta na categoria Juvenil B\n");
    }else if (idade >=18)
    {
        printf("O nadador esta na categoria senior\n");
    }else{
        printf("Digite uma idade validade");
    }
    
    return 0;

}