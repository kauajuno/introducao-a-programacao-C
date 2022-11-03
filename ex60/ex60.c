#include <stdio.h>

int main(){

    int linhas, colunas, flag = 0;

    scanf("%d", &linhas);
    scanf("%d", &colunas);

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= colunas; j++){
            if(j < i){
                if(flag == 0) flag++;
                else printf("-");
                printf("(%d, %d)", i, j);
            }
        }
        flag = 0;
        printf("\n");
    }

    return 0;
}