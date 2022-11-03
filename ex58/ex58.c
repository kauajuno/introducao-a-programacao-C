#include <stdio.h>
#define PADRAOINGRESSO 120

int main(){
    float valorIngresso, valorInicial, valorFinal, lucro, diff, melhorValor, melhorLucro = 0;
    int ingressosVendidos, melhorIngressosVendidos;

    scanf("%f %f %f", &valorIngresso, &valorInicial, &valorFinal);

    for(float preco = valorInicial; preco <= valorFinal; preco++){
        diff = valorIngresso - preco;

        if(diff > 0){
            ingressosVendidos = PADRAOINGRESSO + 50 * diff;
        }else if(diff < 0){
            ingressosVendidos = PADRAOINGRESSO + 60 * diff;
        }else{
            ingressosVendidos = PADRAOINGRESSO;
        }

        lucro = (ingressosVendidos * preco) - (200 + 0.05 * ingressosVendidos);

        printf("V: %.2f, N: %d, L: %.2f\n", preco, ingressosVendidos, lucro);

        if (lucro > melhorLucro){
            melhorValor = preco;
            melhorLucro = lucro;
            melhorIngressosVendidos = ingressosVendidos;
        }
    }

    printf("Melhor valor final: %.2f\nLucro: %.2f\nNumero de ingressos: %d\n", melhorValor, melhorLucro, melhorIngressosVendidos);

    return 0;

}