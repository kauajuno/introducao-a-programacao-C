#include <stdio.h>

int main(){
    int num, v[32], tam;

    while(scanf("%d", &num) != EOF){
        tam = 0;
        while(num != 0){
            v[tam] = num % 2;
            num /= 2;
            tam++;
        }

        for(tam--; tam >= 0; tam--){
            printf("%d", v[tam]);
        }

        printf("\n");
    }

    return 0;

}