#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

    //definindo variaveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //condicional siples
    if(a == 4) {
            printf("\n A varivel a = 4 \n");
    }
    if(b == 2.5) {
            printf("\n A varivel b = 2.5 \n");
    }
    if(c == 'x') {
            printf("\n A varivel c = x \n");
    }

    //condição composta
    if (opcao == 1 ){
        printf("\n A opcao = 1\n\n");
    }else if (opcao == 2){
        printf ("\n A pcao = 2 \n\n");
    }else{
        printf("\n A opcao neo eh igual a 1 e nem 2\n\n");

    }


    //Número par ou impar
    if(a %2 == 1) {
        printf("\n A varivel a eh impar! \n");
    }else{
        printf("\n A varivel a eh par! \n\n");

    }












    //pausa o programa apos executado
    system("pause");




}
