#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){


    //Definido variáveis
    int a = 1, b = 10;

    //Primeiro confere a condição, depois repete o bloco
    while (a <= 10) {

        //Imprimir 'a' na tela

        printf("\n %d", a );

        //incremento

       a++;  // é o msm q ->  a = a + 1;

    }


    a = 1;

    //Primeiro executa uma vez, depois confere a condição
    do {

        //Imprimir 'a' na tela

        printf("\n %d", a );

        //incremento

       a++;  // é o msm q ->  a = a + 1;

    }while(a <= 10);




    //pausa o programa apos executado
    system("pause");




}
