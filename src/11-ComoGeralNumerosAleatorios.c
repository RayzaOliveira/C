#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

    //Responsavel por alimentar o rand de fomra diferente
    srand((unsigned)time (NULL));

    //variável q receber o resto da divisao deo numero por 3 (aleatório entre 0 e 2)
    int aleatorio = rand() %3;

    //Imprimi o valor
     printf("\n %d!\n\n", aleatorio);

     //variável q receber o resto da divisao deo numero por 5 (aleatório entre 1 e 5)
    int aleatorioSegundo = (rand() %5) + 1;

    //Imprimi o valor

     printf("\n %d!\n\n", aleatorioSegundo);

    //pausa o programa apos executado
    system("pause");




}

