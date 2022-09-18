#include <stdio.h>
#include <stdbool.h>
#define TAMANHO 8

bool dataValida(int dia, int mes){
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        if(dia > 31 || dia < 1){
            printf("Data invalida!\n");
            return false;
        }
    }else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
        if(dia > 30 || dia < 1){
            printf("Data invalida!\n");
            return false;
        }
    }else if(mes == 2){
        if(dia > 28 || dia < 1){
            printf("Data invalida!\n");
            return false;
        }
    }else return false;
    return true;
}

void printaMes(int mes){
    switch(mes){
        case 1:
            printf("janeiro");
            break;

        case 2:
            printf("fevereiro");
            break;

        case 3:
            printf("março");
            break;

        case 4:
            printf("abril");
            break;

        case 5:
            printf("maio");
            break;

        case 6:
            printf("junho");
            break;

        case 7:
            printf("julho");
            break;

        case 8:
            printf("agosto");
            break;

        case 9:
            printf("setembro");
            break;

        case 10:
            printf("outubro");
            break;

        case 11:
            printf("novembro");
            break;

        case 12:
            printf("dezembro");
            break;
    }
}

void formaData(int *dia, int *mes, int *ano, int vetor[8]){
    *dia = vetor[7] * 10 + vetor[6];
    *mes = vetor[5] * 10 + vetor[4];
    *ano = vetor[3] * 1000 + vetor[2] * 100 + vetor[1] * 10 + vetor[0];
}

int main(){
    int num, data[TAMANHO], ano, mes, dia;
    scanf("%d", &num);

    for(int i = 0;i < TAMANHO;i++){
        data[i] = num % 10;
        num /= 10;
    }

    formaData(&dia, &mes, &ano, data);
    
    if(dataValida(dia, mes) == false) return 0;
    else{
        printf("%d de ", dia);
        printaMes(mes);
        printf(" de %d\n", ano);
    }

    return 0;
    
}