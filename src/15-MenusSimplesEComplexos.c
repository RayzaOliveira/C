#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

   //Definindo e variaveis

   int opcao;

    //Confere e valida a opcao
    while (opcao < 1 || opcao >3 ){

        //Interface de Menu
        printf ("\n\n Escolha uma opcao:\n");
        printf ("\n 1 opcao..");
        printf ("\n 2 opcao..");
        printf ("\n 3 opcao..\n\n");

        //Lendo a opcao
        scanf ("\n%d", &opcao);

        //Resultado de acordo com a opcao escolhida
        switch(opcao){
        case 1:
            printf("\n A opcao 1 foi escolhida!\n\n");
            break;
        case 2:
            printf("\n A opcao 2 foi escolhida!\n\n");
            break;
        case 3:
            printf("\n A opcao 3 foi escolhida!\n\n");
            break;
        default:
            printf("\n A opcao invalida!\n\n");
            break;

        }

   }

    //pausa o programa apos executado
    system("pause");


}
