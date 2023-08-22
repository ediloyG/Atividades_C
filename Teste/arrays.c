#include <stdio.h>
#include <stdlib.h>

int main (){

    int nota[4], i, a;
    float media, soma;

    for(i=0; i<4; i++){
       
        printf("digite a nota do aluno\n");
        scanf("%d", &a);
        nota[i] = a;
        soma =+ nota[i];
        printf ("%.2f\n", soma);
    }
    media = soma / 4;
    printf("a media do aluno %.2f", media);

    return 0;
};