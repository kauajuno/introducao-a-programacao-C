#include <stdio.h>
#include <stdlib.h>

// Bubble sort

void swap(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void bubbleSort(int *v, int size){
    int i, j;
    for(i = 0; i < size - 1; i++){
        for(j = 0; j < (size - i - 1); j++){
            if(v[j] > v[j+1]) swap(&v[j], &v[j+1]);
        }
    }
}

int main(){
    int size;

    scanf("%d", &size);

    int* v = (int *) malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) scanf("%d", &v[i]);

    bubbleSort(v, size);

    for(int i = 0; i < size; i++) printf("%d\n", v[i]);

    return 0;
}