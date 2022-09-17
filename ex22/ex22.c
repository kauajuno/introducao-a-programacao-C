#include <stdio.h>
#define PRECOHORAFRAG 5.0
#define PRECOHORASET 10.0


int main(){
    int horas, set, frag;
    float preco;

    scanf("%d", &horas);

    set = horas / 3;
    frag = horas % 3;
    preco = frag * PRECOHORAFRAG + set * PRECOHORASET;

    printf("O VALOR A PAGAR E = %.2f", preco);

    return 0;
}