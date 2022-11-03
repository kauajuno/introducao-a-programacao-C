#include <stdio.h>

int main(){
    int num, div = 1;

    scanf("%d", &num);

    printf("%d = %d ", num, div);

    for(int i = 2; i < num; i++){
        if(num % i == 0){
            div += i;
            printf("+ %d ", i);
        }
    }
    printf("= %d ", div);

    if(div == num) printf("(NUMERO PERFEITO)\n");
    else printf("(NUMERO NAO E PERFEITO)\n");

    return 0;
}