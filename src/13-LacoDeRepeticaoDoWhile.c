#include <stdio.h>
#include <stdlib.h>

//fun��o principal do programa
void main (){


    //Definido vari�veis
    int a = 1, b = 10;

    //Primeiro confere a condi��o, depois repete o bloco
    while (a <= 10) {

        //Imprimir 'a' na tela

        printf("\n %d", a );

        //incremento

       a++;  // � o msm q ->  a = a + 1;

    }


    a = 1;

    //Primeiro executa uma vez, depois confere a condi��o
    do {

        //Imprimir 'a' na tela

        printf("\n %d", a );

        //incremento

       a++;  // � o msm q ->  a = a + 1;

    }while(a <= 10);




    //pausa o programa apos executado
    system("pause");




}
