#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int slots;
    float *vec, low = -999999;
    bool ordenado;

    scanf("%d", &slots);

    while(slots > 0){
        ordenado = true;
        vec = (float*) malloc(slots * sizeof(int));

        for(int i = 0; i < slots; i++){
            scanf("%f", &vec[i]);
        }

        for(int i = 1; i < slots; i++){
            if(vec[i] < vec[i - 1]){
                ordenado = false;
                break;
            }
        }

        free(vec);

        if(ordenado) printf("ORDENADA\n");
        else printf("DESORDENADA\n");
        scanf("%d", &slots);
    }
}