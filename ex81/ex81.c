#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *v, cont, maior, posmaior;

    scanf("%d", &n);

    while(n != 0){

        maior = -1;

        v = (int*) malloc(n * sizeof(int));

        for(cont = 0; cont < n; cont++)
            scanf("%d", &v[cont]);

        for(cont = 0; cont < n; cont++){
            if(v[cont] > maior){
                maior = v[cont];
                posmaior = cont;
            }
        }

        printf("%d %d\n", posmaior, maior);

        scanf("%d", &n);
    }

    return 0;
}