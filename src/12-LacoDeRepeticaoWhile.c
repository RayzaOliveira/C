#include <stdio.h>
#include <stdlib.h>

//fun��o principal do programa
void main (){


    //Definido vari�veis
    int a = 1, b = 10;

    //Contando at� 10
    while (a <= 10) {

        //Imprimir 'a' na tela

        printf("\n %d", a );

        //incremento

       a++;  // � o msm q ->  a = a + 1;

    }



    //Contagem regressiva
    while (b >= 1) {

        //Imprimir 'b' na tela

        printf("\n %d", b );

        //incremento

       b--;  // � o msm q ->  a = a - 1;

    }



    //pausa o programa apos executado
    system("pause");




}
