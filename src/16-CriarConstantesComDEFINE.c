#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//fun��o principal do programa
void main (){

    //imprimir na tela
    printf("%d\n", TAM); //Todo var. maiusculo -> � uma contante

    int i;

    //Contagem at� 10
    for (i = 1; i <= TAM; i++){
        printf("\n%d", i);
    }

    //pausa o programa apos executado
    system("pause");




}

