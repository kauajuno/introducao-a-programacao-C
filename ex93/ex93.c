#include <stdio.h>
#include <stdlib.h>

int main(){
    int vSize, contUnique;
    scanf("%d", &vSize);
    contUnique = vSize;

    int* v = (int *) malloc(vSize * sizeof(int));

    for(int i = 0; i < vSize; i++) scanf("%d", &v[i]);

    for(int i = 0; i < vSize; i++){
        for(int j = 0; j < vSize; j++){
            if(v[i] == v[j] && i != j){
                contUnique--;
                break;
            }
        }
    }

    printf("%d\n", contUnique);

    return 0;
}