#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que converta uma letra maiúscula em letra minúscula. Use
a tabela ASCII para isso
*/
int main(){

  char letra_maiuscula, letra_minuscula;


    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra_maiuscula);

    if (letra_maiuscula >= 'A' && letra_maiuscula <= 'Z') {

        letra_minuscula = letra_maiuscula + ('a' - 'A');

        printf("A letra minuscula equivalente eh: %c\n", letra_minuscula);
    } else {
        printf("Entrada invalida. Digite uma letra maiuscula.\n");
    }

  return 0;
}