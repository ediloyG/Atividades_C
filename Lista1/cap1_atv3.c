#include <stdio.h>
#include <stdlib.h>
/*3) Escreva um programa que leia um número inteiro e depois imprima a
mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando
printf().*/
int main(){
    int num;
    
    scanf("%d",&num);
    printf("Valor lido: %d\n",num); 

    return 0;
}