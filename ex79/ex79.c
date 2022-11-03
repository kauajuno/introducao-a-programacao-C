#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *v, i;
    scanf("%d", &n);
    v = malloc(sizeof(int)*n);

    for(i = 0; i < n; i++)
        scanf("%d", &v[i]);

    for(i = 0; i < n; i++)
        printf("%d ", v[i]);

    return 0;
}