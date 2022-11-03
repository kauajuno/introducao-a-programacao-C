#include <stdio.h>
#include <math.h>

// Valores se aproximam, mas não batem com o esperado.

int fatorial(int n){
    if(n == 1 || n == 0) return 1;
    else return n * fatorial(n - 1);
}

int main(){
    int progressao = 0, N, alavanca = 2;
    float x;
    float sen = 0;

    scanf("%f %d", &x, &N);

    while(progressao <= (2 * N + 1)){ 
        if(progressao != 0){
            if(alavanca % 2 == 0) sen += pow(x, progressao) / fatorial(progressao);
            else sen += pow(x, progressao) / fatorial(progressao) * -1;
            progressao += 2;
        }else{
            sen += pow(x, 1) / fatorial(progressao);
            progressao += 3;
        }

        alavanca++;
    }

    printf("seno(%.2f) = %f\n", x, sen);

    return 0;
}