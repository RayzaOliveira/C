#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main (){

    //definindo variavel
    int a;
    float b;
    char c;
    bool d;

    //passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //Escrevendo na tela
    printf("\nO valor de a = %d", a);
    printf("\nO valor de b = %.2f", b);
    printf("\nO valor de c = %c", c);
    printf("\nO valor de d = %d\n", d);

    //lendo valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c); // pular espaço antes do %c, pq e bugado
    scanf("%d", &d);

    //Escrevendo na Tela
    printf("\n o valor de a = %d", a);
    printf("\n o valor de b = %.2f", b);
    printf("\n o valor de c = %c", c);
    printf("\n O valor de d = %d\n", d);




    //Pausando
    system ("pause");


}
