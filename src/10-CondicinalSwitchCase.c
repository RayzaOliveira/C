#include <stdio.h>
#include <stdlib.h>

//fun��o principal do programa
void main (){

    //Definindo Vari�vel
    int a = 1;
    char b = 'x';

    //C�digo de exemplo com if
    if (a == 1){
        printf("\n A opcao eh 1!\n\n");
    }else if (a == 2){
        printf("\n A opcao eh 2!\n\n");
    }else if (a ==3){
        printf("\n A opcao eh 3!\n\n");
    }else{
        printf("\n Opcao invalida!\n\n");
    }
    // O mesmo c�digo de cima, adaptado aso Switch
    switch (a){
        case 1:
            printf("\n A opcao eh 1!\n\n");
            break;
        case 2:
            printf("\n A opcao eh 2!\n\n");
            break;
        case 3 :
            printf("\n A opcao eh 3!\n\n");
            break;
        default:
            printf("\n A opcao eh 1!\n\n");
            break;
    }


    //Swicth com Char
    switch (b){
        case 'x':
            printf("\n A letra eh x!\n\n");
            break;
        default:
            printf("\n A opcao eh invalida!\n\n");
            break;

    }


    //pausa o programa apos executado
    system("pause");




}

