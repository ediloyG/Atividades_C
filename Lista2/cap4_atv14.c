#include <stdio.h>
#include <stdlib.h>

/*
14) Faça um programa para verificar se determinado número inteiro lido é divisível
por 3 ou 5, mas não simultaneamente pelos dois.


*/
int main(){

    int num;
    

    printf("Digite um numero interiro\n");
    scanf("%d", &num);

    if ((num % 3 == 0) && (num % 5 !=0))
    {
        printf("o numero eh divisivel por 3, mas nao por 5");

    }else if ((num % 3 != 0) && (num % 5 ==0))
    {
        printf("o numero eh divisivel por 5, mas nao por 3");
    }else{
        printf("o numero nao eh divisivel por 3 e nem por 5");
    }
    
    
    return 0;
}