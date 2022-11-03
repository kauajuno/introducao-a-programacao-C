#include <stdio.h>
#include <math.h>

int fatorial(int n){
    if(n == 1 || n == 0) return 1;
    else return n * fatorial(n - 1);
}

int main(){
    int progressao, N;
    float x, somatorio = 0;

    scanf("%f %d", &x, &N);

    while(progressao <= N){
        somatorio += pow(x, progressao) / fatorial(progressao);
        progressao++;
    }

    printf("e^%.2f = %f", x, somatorio);

    return 0;
}