#include <stdio.h>
#define TAXAA 1.030
#define TAXAB 1.015

int main(){
    int popA, popB, ano = 0;
    scanf("%d", &popA);
    scanf("%d", &popB);

    for(; popA < popB; ano++){
        popA *= TAXAA;
        popB *= TAXAB;
    }

    printf("ANOS = %d\n", ano);

    return 0;
}