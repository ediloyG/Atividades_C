#include <stdio.h>
#include <stdlib.h>
/*A importância de R$ 780.000,00 será dividida entre três ganhadores de
um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/
int main(){

float ganhador1, ganhador2, ganhador3;
float premio = 780000.0;

ganhador1 = premio * 0.46;
ganhador2 = premio * 0.32;
ganhador3 = premio  - (ganhador1 + ganhador2);

printf("Quantidade do primeiro ganhador: %.2f\n", ganhador1);
printf("Quantidade do segundo ganhador: %.2f\n", ganhador2);
printf("Quantidade do terceriro ganhador: %.2f\n", ganhador3);

  return 0;
}