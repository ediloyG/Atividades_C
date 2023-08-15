#include <stdio.h>
#include <stdlib.h>

/*14) Faça um programa que leia três caracteres do tipo char e depois os
imprima um em cada linha. Use um único comando printf() para isso.
*/
int main(){

    char letra1, letra2, letra3;

    printf("Digite uma letra\n");
    scanf("%c %c %c", &letra1, &letra2, &letra3);

    printf("Leitura de letras \n letra 1 %c \n letra 2 %c \n letra 3 %c ", letra1, letra2, letra3);
 
    return 0;
}