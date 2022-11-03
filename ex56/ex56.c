#include <stdio.h>

int main(){
    float investimentoInicial, juros, total;
    int meses;

    scanf("%f %f %d", &investimentoInicial, &juros, &meses);

    total = investimentoInicial;

    for(int i = 1; i <= meses; i++){
        total *= 1 + juros;
        printf("a*(1+r)^%d = %.2f, renda: %.2f\n", i, total, total - investimentoInicial);
    }

    return 0;
}