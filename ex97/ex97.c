#include <stdio.h>
#include <stdlib.h>

void swap(int *n1, int *n2){
    int aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void bubbleSort(int *v, int size){
    int i, j;
    for(i = 0; i < (size - 1); i++)
        for(j = 0; j < (size - 1 - i); j++)
            if(v[j] > v[j + 1])
                swap(&v[j], &v[j + 1]);
}

int main(){
    int vetorSize, i;

    scanf("%d", &vetorSize);

    int *v = (int *) malloc(vetorSize * sizeof(int));
    
    for(i = 0; i < vetorSize; i++) scanf("%d", &v[i]);

    bubbleSort(v, vetorSize);

    for(i = 0; i < vetorSize; i++) if(v[i] % 2 == 0) printf("%d\n", v[i]);
    for(i--; i >= 0; i--) if(v[i] % 2 == 1) printf("%d\n", v[i]);

    return 0;
}