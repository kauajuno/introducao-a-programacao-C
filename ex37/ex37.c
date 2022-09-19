#include <stdio.h>
#define CAP 937 * 1.5

int main(){
    float rendaBrutaFamilia, rendaBrutaPerCapita;
    int tamanhoFamilia, tipoEscola, etnia;
    // escola: 1 - particular, 2 - publica
    // etnia: 1 - preto, 2 - pardo, 3 - indigena, 4 - branco

    scanf("%f %d %d %d", &rendaBrutaFamilia, &tamanhoFamilia, &tipoEscola, &etnia);

    rendaBrutaPerCapita = rendaBrutaFamilia / tamanhoFamilia;

    if(tipoEscola == 2 && rendaBrutaPerCapita < CAP && etnia != 1) printf("ALUNO COTISTA (L2)\n");
    else if(tipoEscola == 2 && rendaBrutaPerCapita < CAP) printf("ALUNO COTISTA (L1)\n");
    else if(tipoEscola == 2 && etnia != 1) printf("ALUNO COTISTA (L4)\n");
    else if(tipoEscola == 2) printf("ALUNO COTISTA (L3)\n");
    else printf("ALUNO NAO COTISTA\n");

    return 0;
}