#include <stdio.h>

int main(){
    int cc, dr, rt;

    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);

    if(cc < 7 && dr > 50 && rt > 80000){
        printf("ACO DE GRAU = 10");
    }else if(cc < 7 && dr > 50){
        printf("ACO DE GRAU = 9");
    }else if(cc < 7){
        printf("ACO DE GRAU = 8");
    }else{
        printf("ACO DE GRAU = 7");
    }
}