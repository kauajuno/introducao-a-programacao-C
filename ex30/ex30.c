#include <stdio.h>

void swap(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(){

    int n1, n2, n3, n4;

    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    if(n1 > n2) swap(&n1, &n2);
    if(n3 > n4) swap(&n3, &n4);

    if(n2 > n4) swap(&n2, &n4);
    if(n1 > n3) swap(&n1, &n3);

    if(n2 > n3) swap(&n2, &n3);

    

    printf("%d\n", n1 + n2 + n3);

    return 0;
}