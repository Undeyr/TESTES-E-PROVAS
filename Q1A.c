#include <stdio.h>
#include <stdlib.h>

int main(){

    int X = 4, Y = 3, Z = 6, W = 2; //declarando as variáveis e seus valores

    if(abs(X - Y) > 1 && abs(X - Z) > 1 && abs(X - W) > 1){ // vê se o módulo da subtração de dois números é maior que um, analisa todos os números, dois a dois, foco em X
        printf("%d eh o numero distante.", X); // imprime o número distante, se a condição acima for verdadeira
        return 0; // encerra o programa
    }
    if(abs(Y - X) > 1 && abs(Y - Z) > 1 && abs(Y - W) > 1){ // vê se o módulo da subtração de dois números é maior que um, analisa todos os números, dois a dois, foco em Y
        printf("%d eh o numero distante.", Y); // imprime o número distante, se a condição acima for verdadeira
        return 0; // encerra o programa
    }
    if(abs(Z - X) > 1 && abs(Z - Y) > 1 && abs(Z - W) > 1){ // vê se o módulo da subtração de dois números é maior que um, analisa todos os números, dois a dois, foco em Z
        printf("%d eh o numero distante.", Z); // imprime o número distante, se a condição acima for verdadeira
        return 0; // encerra o programa
    }
    if(abs(W - X) > 1 && abs(W - Z) > 1 && abs(W - Y) > 1){ // vê se o módulo da subtração de dois números é maior que um, analisa todos os números, dois a dois, foco em W
        printf("%d eh o numero distante.", W); // imprime o número distante, se a condição acima for verdadeira
        return 0; // encerra o programa
    }

}

