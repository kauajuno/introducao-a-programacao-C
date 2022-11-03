#include <stdio.h>

int main(){
    int num, impar = 1;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        printf("%d*%d*%d = %d", i, i, i, impar);
        impar += 2;
        for(int cont = 1; cont < i; cont++){
            printf("+%d", impar);
            impar += 2;
        }
        printf("\n");
    }
}