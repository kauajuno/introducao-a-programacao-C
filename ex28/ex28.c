#include <stdio.h>

void troca(float *n1, float *n2){
    float aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main(){
    float n1, n2, n3;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if(n1 > n2) troca(&n1, &n2);
    if(n2 > n3) troca(&n2, &n3);
    if(n1 > n2) troca(&n1, &n2);
    

    printf("%.2f, %.2f, %.2f", n1, n2, n3);

}