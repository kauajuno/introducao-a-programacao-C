#include <stdio.h>

int main(){
    unsigned int num;
    float soma;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        soma += (float) 1 / i;
    }

    printf("%.6f\n", soma);

    return 0;
}