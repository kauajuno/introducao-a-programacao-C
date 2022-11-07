#include <stdio.h>
#include <stdlib.h>

int main(){
    int size, high = 0, low = 1001, i, j;

    scanf("%d", &size);

    int *v = (int *) malloc(size * sizeof(int));

    for(i = 0, j = size - 1; i < size; i++, j--){
        scanf("%d", &v[i]);
        if(v[i] > high) high = v[i];
        if(v[i] < low) low = v[i];
    }

    for(i = 0; i < size; i++){
        printf("%d ", v[i]);
    }

    printf("\n");
    
    for(i--; i >= 0; i--){
        printf("%d ", v[i]);
    }

    printf("\n");

    printf("%d\n", high);
    printf("%d\n", low);

    return 0;
}