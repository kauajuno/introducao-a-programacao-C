#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vec, size, i, j, highest, cont;

    scanf("%d", &size);
    while(size > 0){

        highest = 0;

        vec = (int *) malloc(size * sizeof(int));

        for(j = 0; j < size; j++) scanf("%d", &vec[j]);

        for(j = 0; j < size; j++) if(vec[j] > highest) highest = vec[j];

        for(i = 0; i <= highest; i++){
            cont = 0;
            for(j = 0; j < size; j++){
                if(vec[j] <= i) cont++;
            }
            printf("(%d) %d\n", i, cont);
        }

        free(vec);

        scanf("%d", &size);
    }

    return 0;
}