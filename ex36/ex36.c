#include <stdio.h>

void swapFloat(float *n1, float *n2){
    float aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

int main(){
    float n1, n2, n3, n4;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    if(n1>n2) swapFloat(&n1, &n2);
    if(n3>n4) swapFloat(&n3, &n4);
    if(n2>n4) swapFloat(&n2, &n4);
    if(n1>n3) swapFloat(&n1, &n3);
    if(n2>n3) swapFloat(&n2, &n3);

    printf("%.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);
    
    return 0;
}