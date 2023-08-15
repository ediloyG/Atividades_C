#include <stdio.h>
#include <stdlib.h>
/*9) Faça um programa que leia dois valores do tipo float. Use um único
comando de leitura para isso. Em seguida, imprima os valores lidos na
ordem inversa em que eles foram lidos.
*/
int main(){
   float a,b;

   printf("Escreva 1 numero e 2 nume\n");
   scanf("%f %f",&a,&b);

   printf("Aqui esta o 2 numero = %.1f e 1 numero = %.1f",b,a); 
   
    return 0;
}