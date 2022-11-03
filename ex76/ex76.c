#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int size, searches, i, j, item;
    bool flag;

    scanf("%d", &size);

    int* vec = (int*) malloc(size * sizeof(int));

    for(i = 0; i < size; i++)
        scanf("%d", &vec[i]);

    scanf("%d", &searches);

    for(i = 0; i < searches; i++){
        flag = false;
        scanf("%d", &item);
        for(j = 0; j < size; j++){
            if(vec[j] == item){
                flag = true;
                break;
            }
        }
        if(flag) printf("ACHEI\n");
        else printf("NAO ACHEI\n");
    }

    return 0;
}