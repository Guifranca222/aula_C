#include <stdio.h>

int senha[5] = [35, 12, 28, 7, 19];

int selectionSort(int vetor[], int tamanho){
    for (i = 0; i < tamanho - 1; i++) {
        posicaoMenor = i;                          // chute: o menor é o primeiro
        for (j = i + 1; j < tamanho; j++) {        // olha o resto
            if (vetor[j] < vetor[posicaoMenor]) {
                posicaoMenor = j;                  // achei um menor: guardo a POSIÇÃO
            }
        }
        auxiliar = vetor[i];                       // troca só depois de procurar
        vetor[i] = vetor[posicaoMenor];
        vetor[posicaoMenor] = auxiliar;
    }
}