#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//função principal do programa
int main (){

    //Criando a matiz
    int matriz [2] [2], i , j;

    //Passando valores
    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [1][0] = 3;
    matriz [0][0] = 4;

    //Imprimindo valores na tela
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           // cout << "\ni = " << i << ", j = " << j;
           cout  << matriz [i][j] << " ";
        }
        cout << "\n";
    }


    //Lendo valores para a matriz
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           //scanf("%d", &matriz [i][j]);
           cin >> matriz [i][j];
        }
    }

    //Imprimindo valores na tela
    for (i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           cout  << matriz [i][j] << " ";
        }
        cout << "\n";
    }

    //pausa o programa apos executado
    system("pause");


    return 0;

}

