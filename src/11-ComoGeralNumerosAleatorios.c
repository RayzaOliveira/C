#include <stdio.h>
#include <stdlib.h>

//fun��o principal do programa
void main (){

    //Responsavel por alimentar o rand de fomra diferente
    srand((unsigned)time (NULL));

    //vari�vel q receber o resto da divisao deo numero por 3 (aleat�rio entre 0 e 2)
    int aleatorio = rand() %3;

    //Imprimi o valor
     printf("\n %d!\n\n", aleatorio);

     //vari�vel q receber o resto da divisao deo numero por 5 (aleat�rio entre 1 e 5)
    int aleatorioSegundo = (rand() %5) + 1;

    //Imprimi o valor

     printf("\n %d!\n\n", aleatorioSegundo);

    //pausa o programa apos executado
    system("pause");




}

