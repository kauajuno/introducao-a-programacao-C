#include <stdio.h>
#include <math.h>

// O programa não menciona mas eu imagino que não deveria executar se o primeiro número for ímpar
// Se não houver sempre um PAR de pontos pra calcular a distância não dá certo

int main(){
    int nPontos;
    double p1[3], p2[3], distance;

    scanf("%d", &nPontos);

    nPontos /= 2;

    for(int i = 0; i < nPontos; i++){
        for(int j = 0; j < 3; j++) scanf("%lf", &p1[j]);
        for(int j = 0; j < 3; j++) scanf("%lf", &p2[j]);

        distance = sqrt(pow(p1[0] - p2[0], 2) + pow(p1[1] - p2[1], 2) + pow(p1[2] - p2[2], 2));

        printf("%.2lf\n", distance);
    }
    
    return 0;
}