#include <stdio.h>

int main(){
    int num, contFinais = 1;

    scanf("%d", &num);

    for(int i = 1; i < num; i++){
        for(int rival = i + 1; rival <= num; rival++){
            printf("Final %d: Time%d X Time%d\n", contFinais, i, rival);
            contFinais++;
        }
    }

    return 0;
}