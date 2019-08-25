#include <stdio.h>
#include <stdlib.h>
#define TAM 3
//função principal do programa
void main (){

    //Imprimir na tela
    int vetor [TAM],cont;

    //Passando valores para o veror
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posicao
    for (cont = 0; cont < TAM; cont++){
         vetor[cont] = vetor[cont] + 1 ;
    }

    //Exebindo os valores do vetor
    printf("\n Posicao 0: %d", vetor[0]);
    printf("\n Posicao 1: %d", vetor[1]);
    printf("\n Posicao 2: %d\n\n", vetor[2]);


    //Imprimindo os valores em um laco de repeticao
    for (cont = 0; cont < TAM; cont++){
        printf("\n Posicao %d : %d\n\n", cont, vetor[cont]);
    }

     //Lendo 3 valores para o vetor
    for (cont = 0; cont < TAM; cont++){
        scanf("\n%d", &vetor[cont]);
    }


    //pausa o programa apos executado
    system("pause");




}

