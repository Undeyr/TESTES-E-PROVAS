#include <stdio.h>
#include <stdlib.h>

int main(){


    int X, Y;
    printf("Digite um numero: "); //leitura da variável X
    scanf("%d", &X); // armazena na variável
    printf("Digite um numero: "); // leitura da variável Y
    scanf("%d", &Y); // armazena na variável

    int i, aux; // i representa os numeros inteiros menores que X ou Y, que servirão para fazer a divisão e encontrar os divisores
    aux = 0; // aux representa o numero de divisores em comum de X e Y, a partir do número 2

    for(i = 2; i < X + 1; i++){ // um laço de repetição, começando com i = 2 e indo até X
        if(X % i == 0 && Y % i == 0){ // verifica se o divisor é comum entre X e Y, usando o resto da divisão de X e Y por i
            aux++; // se sim, a variável aux recebe aux + 1
        }
        if(aux > 0){ // verifica se o número de divisores comuns de X e Y, com exceção do número 1, é maior que zero
            printf("Nao sao primos entre si."); // imprime que não são primos entre si
            break; // quebra o laço de repetição
        }
    }

    if(aux == 0){ // verifica se o número de divisores comuns de X e Y, com exceção do número 1, é igual a zero
        printf("Sao primos entre si."); // imprime que são primos entre si
    }

}