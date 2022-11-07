#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, i, high = 0, last, highpos, lastfreq = 0;
    scanf("%d", &size);

    int *vec = (int *) malloc(size * sizeof(int));

    for(i = 0; i < size; i++) scanf("%d", &vec[i]);

    last = vec[i];

    for(i = 0; i < size; i++){
        if(vec[i] == last) lastfreq++;
        if(vec[i] > high){
            high = vec[i];
            highpos = i;
        }
    }

    printf("Nota 4, 3 vezes\n", last, lastfreq);
    printf("Nota %d, indice %d\n", high, highpos);

    return 0;
}