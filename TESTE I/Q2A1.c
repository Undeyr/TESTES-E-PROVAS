#include <stdlib.h>
#include <stdio.h>

int main(){


    int L[10] = {9, 2, 5, 8, 17, 11, 3, 20, 15, 31}; // declara a lista L
    int X; //declara a variável X
    printf("Digite um numero: "); //leitura de X
    scanf("%d", &X); // armazena a leitura na variável

    int i, aux, j; // declaração de variáveis
    aux = 0; // variável auxiliar que determina se X aparece ou não na lista

    for(i = 0; i < 10; i++){ // percorre a lista do começo ao fim
        if(X == L[i]){ // verifica se X aparece na nesse componente da lista
            printf("Sim, %d esta na lista.", X);
            aux = 1;
            return 0; // encerra o programa
        }
    }

    if(aux == 0){ // caso X não apareça na lista
        for(i = 1; 0 != 1; i++){ // cria um loop infinito, atualizando o valor de i a cada loop
            for(j = 0; j < 10; j++){ // outro loop, dessa vez para percorrer novamente a lista L, dessa vez em busca do número mais próximo de X
                if(L[j] == X + i){ // verifica se X + i aparece na lista
                    printf("%d nao esta na lista, mas eu encontrei o %d.", X, X + i);
                    return 0; // encerra o programa
                }
                if(L[j] == X - i){ // verifica de X - i aparece na lista
                    printf("%d nao esta na lista, mas eu encontrei o %d.", X, X - i);
                    return 0; // encerra o programa
                }
            }
        }
    }


}