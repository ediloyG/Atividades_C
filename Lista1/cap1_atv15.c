#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia três variáveis: char, int e float. Em
seguida, imprima-as de três maneiras diferentes: separadas por espaços,
por uma tabulação horizontal e uma em cada linha. Use um único comando
printf() para cada operação de escrita das três variáveis.
*/
int main(){

    char caractere;
    int numeroInteiro;
    float numeroFloat;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Digite um numero inteiro: ");
    scanf("%d", &numeroInteiro);

    printf("Digite um numero decimal: ");
    scanf("%f", &numeroFloat);

    // Imprimindo de três maneiras diferentes
    printf("Separados por espacos: %c %d %.2f\n", caractere, numeroInteiro, numeroFloat);
    printf("Separados por tabulacao: %c\t%d\t%.2f\n", caractere, numeroInteiro, numeroFloat);
    printf("Uma em cada linha:\n");
    printf("%c\n%d\n%.2f\n", caractere, numeroInteiro, numeroFloat);

    return 0;
}