#include <stdio.h>
#include <stdlib.h>

//função principal do programa
void main (){

    // definindo variaveis
    int a = 6, b = 3;

    //soma
    printf("\n A soma de %d e %d = %d", a, b, a + b);

    //subtraçao
    printf("\n A subtracao de %d e %d = %d", a, b, a - b);

      //divisão
    printf("\n A divisao de %d e %d = %d", a, b, a / b);

    //multiplicaçao
    printf("\n A multiplicacao de %d e %d = %d", a, b, a * b);

    //resto da divisao
    printf("\n A resto de %d e %d = %d", a, b, a % b);

    //valor absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3) );


    //imprimir na tela
    printf("\n Oi mundo!\n");


    //pausa o programa apos executado
    system("pause");




}
