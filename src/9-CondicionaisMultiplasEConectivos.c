#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

    // definindo variaveis
    int a = 20;

    //Conectivo logico E (AND -> &&), Se uma comparação for FALSA, não entra no bloco.
    if (a > 5 && a > 15) {   //TUDO TEM Q SER VERDADEIRO

    printf("\n A variavel 'a' esta entre 5 e 15!\n\n");

    }

    //Conetctivo logico OU (OR -> || ), Se uma comparação for VERDADEIRA, já entra no bloco.
    if (a > 5 || a > 15) {

    printf("\n A variavel 'a' eh maior q 5 ou  15!\n\n");

    }

    // Misturando conectivos
    if ((a > 5 && a < 15) || a == 20) {

    printf("\n A variavel 'a' esta entre 5 e 15 ou ela vale 20!\n\n");

    }


    //pausa o programa apos executado
    system("pause");

}

