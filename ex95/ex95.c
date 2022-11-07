#include <stdio.h>
#include <stdlib.h>

int main(){
    int totalElementos, contUnique = 1, flag;
    scanf("%d", &totalElementos);

    int *v = (int *) malloc(totalElementos * sizeof(int));
    int *unique = (int *) malloc(totalElementos * sizeof(int));

    for(int i = 0; i < totalElementos; i++) scanf("%d", &v[i]);

    unique[0] = v[0];


    for(int i = 1; i < totalElementos; i++){
        for(int j = 0; j < contUnique; j++){
            flag = 1;
            if(unique[j] == v[i]){
                flag = 0;
                break;
            }
        }
        if(flag) unique[contUnique++] = v[i];
    }

    for(int i = 0; i < contUnique; i++) printf("%d\n", unique[i]);

    return 0;
}