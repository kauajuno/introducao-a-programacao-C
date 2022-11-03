#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *v, cont, soma = 0;

    scanf("%d", &n);

    v = (int*) malloc(n * sizeof(int));

    for(cont = 0; cont < n; cont++)
        scanf("%d", &v[cont]);

    for(cont = 0; cont < n; cont++){
        soma += v[cont];
    }

    printf("%d\n", soma);

    return 0;
}