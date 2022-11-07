#include <stdio.h>
#include <stdlib.h>

int main(){
    int totalAlunos, minPresencas, pontualCont = 0;
    scanf("%d %d", &totalAlunos, &minPresencas);

    int* alunosArray = (int *) malloc(totalAlunos * sizeof(int));
    int* alunosPontuaisArray = (int *) malloc(totalAlunos * sizeof(int));

    for(int i = 0; i < totalAlunos; i++) scanf("%d", &alunosArray[i]);

    for(int i = 0; i < totalAlunos; i++){
        if(alunosArray[i] <= 0){
            alunosPontuaisArray[pontualCont] = i + 1;
            pontualCont++;
        }
    }

    if(pontualCont >= minPresencas){
        printf("NAO\n");
        for(int i = pontualCont - 1; i >= 0; i--){
            printf("%d\n", alunosPontuaisArray[i]);
        }
    }else{
        printf("SIM\n");
    }
    
    return 0;
}