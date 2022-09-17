#include <stdio.h>

int main(){
    float valor, percentualDist, percentualImp;

    scanf("%f", &valor);
    scanf("%f", &percentualDist);
    scanf("%f", &percentualImp);

    valor += valor * percentualDist / 100 + valor * percentualImp / 100;

    printf("O VALOR DO CARRO E = %.2f\n", valor);
}