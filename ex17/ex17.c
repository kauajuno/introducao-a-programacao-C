#include <stdio.h>

int main(){
    int numInicial, numFinal = 0, alg[3];

    scanf("%d", &numInicial);

    for(int cont=0;cont<3;cont++){
        alg[cont] = numInicial % 10;
        numInicial /= 10;
    }

    for(int cont=0, i = 100;cont<3;cont++, i /= 10){
        numFinal += alg[cont] * i;
    }

    printf("%d\n", numFinal);

    return 0;

}