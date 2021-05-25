#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char T[50] = {"Bruna viu o Ivo e o Pedro Ivo"}; // declara char do texto
    int cont, i, tam;
    tam = strlen(T);
    for(i = tam; i > -1; i--){ //percorre T do começo ao fim
        T[i] = T[i - 1]; //desloca todos os caracteres uma casa para direita
    }
    T[0] = ' '; // adiciona um espaço no começo de T, para servir de referencia, já que o programa inicia a verificação por um espaço

    int j, z, tamB, k;
    k = 1;
    for(i = 1; i < tam; i++){ // percorre T do começo ao fim
        z = 0;
        char B[50]; // onde vão ficar armazenadas as palavras que serão busccadas no texto
        char C[50]; // char que irá armazer a repetição de B, se houver
        for(j = 1; j < tam; j++){ // percorre B do começo ao fim
            if(T[k] != ' '){
                B[j - 1] = T[k]; // B vai recebendo os caracteres de uma das palavras de T, até receber todos os caracteres
                k++;
            }
            else{
                B[j - 1] = '\0'; // mostra quando o texto se encerra, pra evitar caracteres aleatórios presentes na memória
                C[j] = '\0'; // mostra quando o texto se encerra, pra evitar caracteres aleatórios presentes na memória
                i = j;
                k++;
                break; // encerra o laço de repetição
            }
        }
        tamB = strlen(B);
        while(j < tam){ // após, a palavra ser armazenda em B, vamos ver se ela tem repetição.
            j++;
            if(T[j] == B[z]){ // verifica se outros caracteres em T são iguais aos da palavra armazenada em B
                C[z] = B[z]; //vai armazenando os caracteres repetidos em C
                z++;
            }
            if(C[tamB - 1] == B[tamB - 1]){ //se o último caractere de B e C forem iguais, significa que há repetição
                printf("Apresenta repeticao.");
                return 0; // encerra o programa
            }
        }
    }
printf("Nao apresenta repeticao.");
}