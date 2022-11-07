#include <stdio.h>

#define SIZE 11
#define PRIMEIROSDIG 9

int main(){
    int NC, cpf[SIZE], somatotal, b1, b2, dgtInvertido;

    scanf("%d", &NC);

    while(NC--){

        somatotal = 0;
        b1 = 0;
        b2 = 0;
        
        for(int dgt = 0; dgt < SIZE; dgt++) scanf("%d", &cpf[dgt]);

        for(int dgt = 0; dgt < SIZE; dgt++) somatotal += cpf[dgt];

        for(int dgt = 0, dgtInvertido = PRIMEIROSDIG; dgt < PRIMEIROSDIG; dgt++, dgtInvertido--){
            b1 += cpf[dgt] * (dgt + 1);
            b2 += cpf[dgt] * dgtInvertido;
        }

        b1 = b1 % 11;
        if(b1 == 10) b1 = 0;

        b2 = b2 % 11;
        if(b2 == 10) b2 = 0;

        if(somatotal % 11 == 0 && cpf[9] == b1 && cpf[10] == b2) printf("CPF valido\n");
        else printf("CPF invalido\n");

    }

    return 0;
    
}