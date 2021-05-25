#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char T[100] ={"A Eva viu a Bruna, e a Bruna viu a Bia, mas a Bia nao viu nem a Eva nem a Bruna"};
    char F[8] = {"Eva"};
    char G[8] = {"Bruna"};
    char A[8]; // char que vai servir para auxiliar o ctrl F de F
    char B[8]; // char que vai servir para auxiliar o ctrl F de G
    char R[100]; // Vai armazenar o texto certo
    int tamT, tamF, tamG, i, j, k, x, y, aux; // declaração de variáveis
    tamT = strlen(T); tamF = strlen(F); tamG = strlen(G); x = 0; y = 0;

    for(i = 0; i < tamT; i++){
        aux = 0;
        if(T[i] == F[0]){ // verifica se o caractere de T é igual ao primeiro de F
            for(j = 0; j < tamF; j++){ // laço de repetição para conferir se a palavra é igual a F
                if(T[i + j] == F[j]){
                    A[j] = F[j]; // A vai recenbendo os caracteres de F
                    if(A[tamF - 1] == F[tamF - 1]){ // Se o último caractere de A e F forem iguais, a palavra é a correta
                        A[tamF - 1] = '\0'; // o \0 é adicionado para "zerar" A para um novo ctrl F
                        for(k = 0; k < tamG; k++){
                            R[x + k] = G[k]; //substituição de F por G
                        }
                        x = x + tamG; // corresponde a posição que os caracteres vão ser gravados em R
                        i = i + tamF - 1; // atualiza i para ir para o caractere de T que vem após a substituição da palavra
                        y = x; // corresponde a posição que os caracteres vão ser gravados em R
                        aux = 1; // indica que foi feita a troca de palavras
                        break; // encerra o laço de repetição
                    }
                }
                else{ //caso não seja a palavra desejada
                    R[x] = T[i]; //grava os caracteres que não fazem parte das palavras desejadas
                    x++; // atualiza x
                    y = x; // atualiza y
                    break; // encerra o laço de repetição
                }
            }
        }
        if(T[i] == G[0]){ // verifica se o caractere de T é igual ao primeiro de G
            for(j = 1; j < tamG; j++){ // laço de repetição para conferir se a palavra é igual a G
                if(T[i + j] == G[j]){
                    B[j] = G[j]; // B vai recenbendo os caracteres de G
                    if(B[tamG - 1] == G[tamG - 1]){ // Se o último caractere de B e G forem iguais, a palavra é a correta
                        B[tamG - 1] = '\0'; // o \0 é adicionado para "zerar" B para um novo ctrl F
                        for(k = 0; k < tamF; k++){
                            R[y + k] = F[k]; //substituição de G por F
                        }
                        y = y + tamF; // corresponde a posição que os caracteres vão ser gravados em R
                        i = i + tamG - 1; // atualiza i para ir para o caractere de T que vem após a substituição da palavra
                        x = y; // corresponde a posição que os caracteres vão ser gravados em R
                        aux = 1; // indica que foi feita a troca de palavras
                        break; // encerra o laço de repetição
                    }
                }
                else{ //caso não seja a palavra desejada
                    R[x] = T[i]; //grava os caracteres que não fazem parte das palavras desejadas
                    x++; // atualiza x
                    y = x; // atualiza y
                    break; // encerra o laço de repetição
                }
            }
        }
        else{ // caso os caracteres não sejam iguais a nenhum inicial de F e G
            if(T[i] != F[0] && aux == 0){ // verifica se houve troca de palavras, indicado por aux = 1
                R[x] = T[i]; //grava os caracteres que não fazem parte das palavras desejadas
                x++; // atualiza x
                y = x; // atualiza y
                aux = 0; 
            }
        }
    }
    int tamR = strlen(R);
    for(i = 0; i < tamR; i++){ // loop para salvar os caracteres de R em T
        T[i] = R[i];
    }
    T[tamR] = '\0'; // declara o fim do texto de T

    printf("%s", T); // imprime T

}