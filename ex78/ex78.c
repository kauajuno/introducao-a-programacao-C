#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, *v, cont = 0;

    scanf("%d", &n);

    v = malloc(sizeof(int) * n);

    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for(i = 0; i < n; i++)
        if(v[i] % 2 == 0){
            printf("%d ", v[i]);
            cont++;
        }

    printf("%d\n", cont);

    return 0;
}