#include <stdio.h>
#include <stdlib.h>
/*
4) Faça um programa que leia o salário de um trabalhador e o valor da prestação de
um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/
int main(){

    float salario, prestacao, aux;

    printf("Insira o seu salario e o valor da prestacao:\n");
    scanf("%f %F", &salario, &prestacao);

    aux = salario * 0.20;
 
    if (aux > prestacao)
    {
        printf("Emprestimos recusado");
    }else{
        printf("Prestação aceita");

    }
    
    return 0;
}