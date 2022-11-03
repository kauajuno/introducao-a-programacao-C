#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool fibonacci(int *n, int pos){
    return n[pos] == n[pos - 1] + n[pos - 2];
}

int main(){
    int tamanho, prev1, prev2, n;

    scanf("%d %d %d", &tamanho, &prev1, &prev2);

    int* v = (int *) malloc(tamanho * sizeof(int));

    for(n = 0; n < tamanho; n++){
        scanf("%d", &v[n]);
    }

    if(prev1 == v[0]) printf("OK\n");
    if(prev2 == v[1]) printf("OK\n");

    for(n = 2; n < tamanho; n++){
        if(fibonacci(v, n)) printf("OK\n");
        else{
            printf("Nao e Fibonacci\n");
            exit(0);
        }
    }

    printf("A serie informada e de Fibonacci");

    return 0;
}