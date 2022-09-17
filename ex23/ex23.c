#include <stdio.h>

int main(){
    float nota;
    scanf("%f", &nota);

    printf("NOTA = %.1f CONCEITO = ", nota);

    if(nota < 6){
        printf("D");
    }else if(nota < 7.5){
        printf("C");
    }else if(nota < 9){
        printf("B");
    }else{
        printf("A");
    }
}