#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia um número real e imprima a quinta parte
desse número.
*/
int main(){

    float numero, quintaParte;

    printf("Digite um numero para saber a quinta parte:");
    scanf("%f", &numero);

    quintaParte = numero / 5.0;

    printf("Mostrando a quinta parte do nuemro %.2f eh %.2f", numero, quintaParte );

    return 0;
}