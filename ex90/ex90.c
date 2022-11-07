#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bubbleSort(int *vetor, int size){
    int i, j;
    for(int i = 0; i < (size - 1); i++){
        for(int j = 0; j < (size - i - 1); j++){
            if(vetor[j] > vetor[j+1]) swap(&vetor[j], &vetor[j+1]);
        }
    }
}

int main(){

    int qtdElementos;
    float mediana;

    scanf("%d", &qtdElementos);

    int* vetorElementos = (int *) malloc(qtdElementos * sizeof(int));

    for(int i = 0; i < qtdElementos; i++) scanf("%d", &vetorElementos[i]);

    bubbleSort(vetorElementos, qtdElementos);

    if(qtdElementos % 2 == 0) mediana = ((float) vetorElementos[qtdElementos / 2] + (float) vetorElementos[qtdElementos / 2 - 1]) / 2;
    else mediana = ((float) vetorElementos[qtdElementos / 2]);

    printf("%.2f\n", mediana);

    return 0;
}