#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, N = 0, K, soma = 0;

    while(N < 1 || N > 1000){
        scanf("%d", &N);
    }

    int * v = (int *) malloc(N * sizeof(int));

    for(i = 0; i < N; i++)
        scanf("%d", &v[i]);

    scanf("%d", &K);

    for(i = 0; i < N; i++){
        if(v[i] >= K) soma++;
    }

    printf("%d\n", soma);
    
}