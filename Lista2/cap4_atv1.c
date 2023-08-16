#include <stdio.h>
#include <stdlib.h>
//1) 1) Faça um programa que leia dois números e mostre qual deles é o maior.
int main(){

    int numero1, numero2;

    printf("Vamos comprar dois numeros:\n");
    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);
    
    if (numero1 == numero2)
    {

        printf("primeiro numero %d e segundo numero %d sao iguais",numero1,numero2);
    
    }else if (numero1>numero2)
    {
    
        printf("primeiro numero %d eh maior que o  segundo numero %d",numero1,numero2);

    }else
    
        printf("o segundo numero %d eh maior que o primeiro numero %d", numero2, numero1);    
    
    
    return 0;
}