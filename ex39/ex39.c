#include <stdio.h>

void swap(float *num1, float *num2){
    float aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

void order(float *num1, float *num2, float *num3){
    if(*num1 > *num2) swap(num1, num2);
    if(*num2 > *num3) swap(num2, num3);
    if(*num1 > *num2) swap(num1, num2);
}

int main(){
    int choice;
    float n1, n2, n3;

    scanf("%d", &choice);

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    order(&n1, &n2, &n3);

    switch(choice){
        case 1:
            printf("%.2f %.2f %.2f\n", n1, n2, n3);
            break;

        case 2:
            printf("%.2f %.2f %.2f\n", n3, n2, n1);
            break;

        case 3:
            printf("%.2f %.2f %.2f\n", n2, n3, n1);
            break;
    }

    return 0;
}