#include <stdio.h>
#include <stdlib.h>

int main (){
    //controle de variaveis
   int menu, dias_semana, n, x, y;

    printf("Escolha uma opcao para acessar as questoes\n");
    printf("1 - apresenta o RA | 2 saber os dias da semana | 3 para arvore| 4 para sair\n");
    scanf("%d", &menu);
    //Inicio do menu
        switch (menu)
    {
    //Mostra o RA
    case 1:
        printf("RA 188660");
        break;
    //Mostra o dia da semana
    case 2:
        printf("Escolhar de 1 a 7\n");
        scanf("%d", &dias_semana);

            switch (dias_semana)
            {
            case 1:
                printf("Domingo");
                break;
            case 2:
                printf("Segunda");    
                break;
            case 3:
                printf("Terca");
                break;
            case 4:
                printf("Quarta");
                break;
            case 5:
                printf("Quinta");
                break;
            case 6:
                printf("Sexta");
                break;
            case 7:
                printf("Sabado");
                break;
            default:
                printf("Numero fora do padrao");
                break;
            }
    //Mostra a arvore
    case 3:
        //usei o do por usar o do
        do {
            printf("Digite um número inteiro positivo 'N'maior que 0 e menor que 9\n");
            scanf("%d", &n);
        //valida o n para maior que 0 e menor que 9
        } while (n <= 0 || n >= 9);
        //x para linha
        for(x = 1; x <= n; x++){
        //y para escrita
            for(y = n - x; y >= 1; y--) // imprime os espaços à esquerda
            printf(" ");
                for(y = 1; y <= x; y++) // imprime os * à esquerda
                printf("*");
                printf(" ");
        printf("\n");
    }
    break;
    //sai da operacao
    case 4:
        printf("voce saiu da operacao");
        break;
    //fora das 4 opções    
    default:

        printf("Numero fora do padrao");
        break;
    }
  //cabo o codigo  
  return 0;
}