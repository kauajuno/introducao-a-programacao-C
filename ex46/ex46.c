#include <stdio.h>
#define QUIT -1

// NÃO FUNCIONAL

int main(){
    int matricula, presenca, quitCondition;
    float aux, provas, listas, trabalhoFinal, check[13];

    while(1){
        provas = 0;
        listas = 0;
        quitCondition = 0;

        scanf("%d", &matricula);

        for(int i = 0; i < 8; i++){
            scanf("%f", &aux);
            provas += aux;
            check[i] = aux;
        }

        for(int i = 8; i < 13; i++){
            scanf("%f", &aux);
            listas += aux;
            check[i] = aux;
        }

        scanf("%f %d", &trabalhoFinal, &presenca);

        for(int i = 0; i < 13; i++){
            if(check[i] == QUIT) quitCondition++;
        }

        if(matricula == QUIT) quitCondition++;
        if(trabalhoFinal == QUIT) quitCondition++;
        if(presenca == QUIT) quitCondition++;

        if(quitCondition == 16){
            break;
        }else{
            //calculando media aritmetica de provas e listas
            provas /= 8;
            listas /= 5;

            //calculando nota final e guardando em aux;
            aux = 0.7 * provas + 0.15 * listas + 0.15 * trabalhoFinal;

            printf("Matricula: %d, Nota Final: %.2f, Situacao Final: ", matricula, aux);

            if(presenca < 96 && aux < 6) printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
            else if(presenca < 96) printf("REPROVADO POR NOTA\n");
            else if(aux < 6) printf("REPROVADO POR FREQUENCIA\n");
            else printf("APROVADO\n");
        }

    }

    return 0;

}