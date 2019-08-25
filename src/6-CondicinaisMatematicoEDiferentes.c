#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

    //Definindo variaveis
    int a = 5, b = 10, c = 15;
    char d = 'x';

    //Maior
    if (a > 2){
        printf("\n %d eh maior q 2\n\n ", a );
    }

    //maior ou igual
    if (c >= b){
        printf("\n %d eh maior ou igual q %d\n\n ", c, b);
    }

    //menor
    if (a < 10){
        printf("\n %d eh menor q 10 \n\n ", a );
    }

    //menor ou igual
    if (a <= 10 ){
        printf("\n %d eh menor q 10 \n\n ", a);
    }

    //diferente
    if (c != 10 ){
        printf("\n %d nao eh 10 \n\n ", c);
    }
     if (d != 'a' ){
        printf("\n %c nao eh a \n\n ", d);
    }




    //pausa o programa apos executado
    system("pause");




}
