#include <stdio.h>

int main(){
    float num1, num2, passo;
    int repeticoes;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%d", &repeticoes);
    scanf("%f", &passo);

    printf("Tabuada de soma:\n");
    for(int i = 0; i < repeticoes; i++){
        printf("%.2f + %.2f = %.2f\n", num1, num2 + passo * i, num1 + num2 + passo * i);
    }

    printf("Tabuada de subtracao:\n");
    for(int i = 0; i < repeticoes; i++){
        printf("%.2f - %.2f = %.2f\n", num1, num2 + passo * i, num1 - (num2 + passo * i));
    }

    printf("Tabuada de soma:\n");
    for(int i = 0; i < repeticoes; i++){
        printf("%.2f x %.2f = %.2f\n", num1, num2 + passo * i, num1 * (num2 + passo * i));
    }
    
    printf("Tabuada de soma:\n");
    for(int i = 0; i < repeticoes; i++){
        printf("%.2f / %.2f = %.2f\n", num1, num2 + passo * i, num1 / (num2 + passo * i));
    }
    
    return 0;

}