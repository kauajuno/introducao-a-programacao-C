#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int NC, vsize, *v, menorDist;
    scanf("%d", &NC);

    for(int i = 0; i < NC; i++){
        menorDist = 2001;

        scanf("%d", &vsize);

        v = (int *) malloc(vsize * sizeof(int));

        for(int j = 0; j < vsize; j++) scanf("%d", &v[j]);

        // Essa estrutura-laço é otimizável (k = j + 1), mas o exercício implica que
        // seja necessário fazer ele de um jeito mal otimizado
        for(int j = 0; j < vsize; j++){
            for(int k = 0; k < vsize; k++){
                if(j != k && abs(v[j] - v[k]) < menorDist) menorDist = abs(v[j] - v[k]);
            }
        }
        printf("%d %d\n", menorDist, (int) pow(vsize, 2));
    }
    return 0;
}