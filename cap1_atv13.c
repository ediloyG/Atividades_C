#include <stdio.h>
#include <stdlib.h>

/*13) Faça um programa que leia um caractere do tipo char e depois o
imprima entre aspas duplas. Assim, se o caractere lido for a letra A,
deverá ser impresso “A”.
*/
int main(){

    char letra;

    printf("Digite uma letra\n");
    scanf("%i", &letra);

    printf("Letra entre aspas \"%c\" ", letra);
 
    return 0;
}