#include <stdio.h>
#include <stdlib.h>

int main(){

    int L[10] = {3, 2, 5, 2, 1, 4, 3, 5, 1, 3}; // declara a lista L e os numeros que fazem parte dela
    int B[10]; // declara a lista B
    int i, aux, z, j;
    aux = 0; // variável que vai dizer se o número salvo na lista B apresenta repetição na lista L
    z = 0;
    for(i = 0; i < 10; i++){ // percorre a lista L do começo ao fim
        for(j = 0; j < 10; j++){ // percorre a lista B do começo ao fim
            if(L[i] == B[j]){ // compara se algum número da lista L é igual a algum número salvo na B
                aux = 1; // aux recebe 1 se o número já tiver sido salvo
                break; // encerra o segundo laço de repetição
            }
        }
        if(aux == 0){ //se o número não foi salvo ainda na lista B
            B[z] = L[i]; // salva o número na lista B
            z++; // essa variável serve para ordenar a posição que os números devem ser salvos na lista B
        }
        aux = 0; // zera o auxiliar para checar o próximo número da lista L
    }

  // agora, vamos eliminar os possíveis valores aleatórios que ficam salvos na memória e podem estar salvos na lista B
    int pos = 0;
        for(i = 0; i < 10; i++){ // percorre a lista B do início ao fim
            for(j = 0; j < 10; j++){ // percorre a lista L do início ao fim
                if(B[i] == L[j]){ // confere se o número em B é presente em L
                    pos = i; // salva a posição
                    break; // encerra o laço de reptição
                }
            }
        }
    int A[pos + 1]; // declara a lista A
    for(i = 0; i < pos + 1; i++){
        A[i] = B[i]; // salva apenas os números certo, excluindo os aletórios que ficam salvos na memória
        printf("%d ", A[i]); // imprime os números da lista A
    }
}  