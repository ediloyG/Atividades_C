#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que calcule o ano de nascimento de uma pessoa a
partir de sua idade e do ano atual.

*/
int main(){

  int nascimento, idade;
  int ano = 2023;

  printf("Insira sua data de nascimento para saber a sua idade:\n");
  scanf("%d", &nascimento);

  idade = ano - nascimento;

  printf("Sua idade eh: %d ", idade);
  
  return 0;
}