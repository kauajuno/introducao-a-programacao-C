#include <stdio.h>

int main(){

    float salMin, limiteIR, valTipo1, valTipo2, salBruto, comissao1, comissao2, salTotal;
    int matricula, qtdTipo1, qtdTipo2;

    scanf("%f %f %f %f", &salMin, &limiteIR, &valTipo1, &valTipo2);

    scanf("%d %d %d", &matricula, &qtdTipo1, &qtdTipo2);

    while(matricula != 0){
        if(qtdTipo1 < 10) comissao1 = 0.13;
        else comissao1 = 0.14;
        if(qtdTipo2 < 20) comissao2 = 0.12;
        else comissao2 = 0.13;

        salBruto = salMin + (qtdTipo1 * valTipo1 * comissao1) + (qtdTipo2 * valTipo2 * comissao2);

        salTotal = salBruto - (salBruto * 0.08);

        if(salTotal > limiteIR) salTotal -= (salTotal - limiteIR) * 0.15;

        printf("MATRICULA = %d, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f\n", matricula, salBruto, salTotal);

        scanf("%d %d %d", &matricula, &qtdTipo1, &qtdTipo2);
    }
}