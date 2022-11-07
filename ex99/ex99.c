#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define A 0
#define E 1
#define I 2
#define O 3
#define U 4

void fillVogaisArray(char* frase, int* vogais){
    for(int i = 0; i < strlen(frase); i++){
        switch(frase[i]){
            case 'a':
            case 'A':
                vogais[A]++;
                break;
                
            case 'e':
            case 'E':
                vogais[E]++;
                break;

            case 'i':
            case 'I':
                vogais[I]++;
                break;

            case 'o':
            case 'O':
                vogais[O]++;
                break;

            case 'u':
            case 'U':
                vogais[U]++;
                break;

            default:
                break;
        }
    }
}

int main(){
    char frase1[128], frase2[128], fraseCompleta[256];
    int* vogaisArray1 = (int *) calloc(5, sizeof(int));
    int* vogaisArray2 = (int *) calloc(5, sizeof(int));
    bool isValid = false;
    double distancia = 0;

    scanf("%[^\n]", &fraseCompleta);

    for(int i = 0; i < strlen(fraseCompleta) - 1; i++){
        if(fraseCompleta[i] == ';' && fraseCompleta[i + 1] == ' '){
            isValid = true;
            strncpy(frase1, fraseCompleta, i);
            frase1[i] = '\0';
            strncpy(frase2, fraseCompleta + i + 2, strlen(fraseCompleta) - 1);
            break;
        }
    }

    if(isValid){
        fillVogaisArray(frase1, vogaisArray1);
        fillVogaisArray(frase2, vogaisArray2);
        printf("(%d, %d, %d, %d, %d)\n", vogaisArray1[A], vogaisArray1[E], vogaisArray1[I], vogaisArray1[O], vogaisArray1[U]);
        printf("(%d, %d, %d, %d, %d)\n", vogaisArray2[A], vogaisArray2[E], vogaisArray2[I], vogaisArray2[O], vogaisArray2[U]);
        
        for(int i = 0; i < 5; i++) distancia += pow(vogaisArray1[i] - vogaisArray2[i], 2);
        distancia = sqrt(distancia);
        printf("%.2lf\n", distancia);
    }else{
        printf("FORMATO INVALIDO!\n");
    }

    return 0;
}