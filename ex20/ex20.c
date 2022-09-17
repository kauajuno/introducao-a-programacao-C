#include <stdio.h>
#define RESIDENCIAL 5
#define COMERCIAL 500
#define INDUSTRIAL 800

int main(){
    int id;
    float gasto;
    char tipo;

    scanf("%d %f %c", &id, &gasto, &tipo);
    
    printf("CONTA = %d\n", id);

    switch(tipo){
        case 'R':
            printf("VALOR DA CONTA = %.2f\n", gasto * 0.05 + 5);
            break;

        case 'C':
            if(gasto > 80) printf("VALOR DA CONTA = %.2f\n", (gasto - 80) * 0.25 + 500);
            else printf("VALOR DA CONTA = %.2f\n", 500);
            break;

        case 'I':
            if(gasto > 100) printf("VALOR DA CONTA = %.2f\n", (gasto - 100) * 0.04 + 800);
            else printf("VALOR DA CONTA = %.2f\n", 800);
            break;
    }

    return 0;
}