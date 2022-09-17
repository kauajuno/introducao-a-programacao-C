#include <stdio.h>

int main(){
    double massaTon, aceleracao, tempo, velocidadeMs, velocidadeKmh, comprimentoPista, trabalhoMecanico;

    scanf("%lf", &massaTon);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    velocidadeMs = aceleracao * tempo;
    velocidadeKmh = aceleracao * tempo * 3.6;
    comprimentoPista = aceleracao * tempo * tempo / 2;
    trabalhoMecanico = massaTon * 1000 * velocidadeMs * velocidadeMs / 2;

    printf("VELOCIDADE = %.2lf\nESPACO PERCORRIDO = %.2lf\nTRABALHO REALIZADO = %.2lf", velocidadeKmh, comprimentoPista, trabalhoMecanico);

}