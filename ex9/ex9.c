#include <stdio.h>

int main(){
    int numero, algs[3], alg4;

    scanf("%d", &numero);

    for(int i = 0; i < 3; i++){
        algs[i] = numero % 10;
        numero /= 10;
    }

    alg4 = (algs[2] + algs[1] * 3 + algs[0] * 5) % 7;

    numero += alg4;

    for(int i = 0, flag = 10; i < 3; i++, flag = flag * 10){
        numero += algs[i] * flag;
    }

    printf("%d", numero);

}