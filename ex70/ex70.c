#include <stdio.h>

int main(){
    float num, dec;
    int parteInteira, frac = 1;

    scanf("%f", &num);

    parteInteira = (int) num;
    
    while(num - parteInteira > 0){
        num *= 10;
        frac *= 10;
        parteInteira = (int) num;
    }

    for(int i = 2; i < (parteInteira / 2) + 1; i++){
        while(parteInteira % i == 0 && frac % i == 0){
            parteInteira /= i;
            frac /= i;
        }
    }

    printf("%d/%d\n", parteInteira, frac);

    return 0;
}