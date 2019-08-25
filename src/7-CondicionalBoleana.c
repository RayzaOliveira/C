#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//função principal do programa
void main (){


    // defindo variaveis
    bool a = true, b = false;

    if (a) {

         //Se a for verdadeiro
    printf("\n A eh verdadeiro !\n\n");
    }

    // comparando o b
    if (b){
        printf ("\n B eh verdadeiro !\n\n" );
    }else{
         printf ("\n B eh falso!\n\n" );

    }

    // comparando uma falsidade ,(!b)-> se nao b
    if (!b){
         printf ("\n B eh falso!\n\n" );
    }

    //pausa o programa apos executado
    system("pause");




}

