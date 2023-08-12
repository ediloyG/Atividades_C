#include <stdio.h>
#include <stdlib.h>
/*10) Elabore um programa que solicite ao usuário entrar com o valor do
dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados
por uma barra (\).
*/
int main(){
   int a,b,c;

   printf("Escreva dia mes e ano de hoje\n");
   scanf("%d %d %d",&a,&b,&c);

   printf("Hoje e %d-%d-%d",a,b,c); 
   
    return 0;
}