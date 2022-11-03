#include <stdio.h>
#include <math.h>

int fatorial(int n){
    if(n == 1 || n == 0) return 1;
    else return n * fatorial(n - 1);
}

int main(){
    int progressao, N, alavanca = 2;
    float x;
    float cos = 0;

    scanf("%f %d", &x, &N);

    while(progressao <= (2 * N)){
        if(alavanca % 2 == 0) cos += pow(x, progressao) / fatorial(progressao);
        else cos += pow(x, progressao) / fatorial(progressao) * -1;

        alavanca++;
        progressao += 2;
    }

    printf("cos(%.2f) = %f\n", x, cos);

    return 0;
}