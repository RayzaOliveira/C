#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

    //Variaveis
    char palavra [255];

    //Instrucao
    printf("\n Degite uma palavra!\n\n");

    //Limpar o Buffer
    setbuf (stdin, 0);

    //Le a string
    fgets(palavra, 255, stdin);

    //aLimpa as casas nao utilizadas
    //[a] [t] [a] [h] [h] [ ] [ ] [ ] [ ] [\0 ]
    palavra[strlen(palavra)-1] = '\0';

    //Imprimir na tela
    printf("%s\n\n", palavra);


    //pausa o programa apos executado
    system("pause");




}
