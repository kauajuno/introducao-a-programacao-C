#include <stdio.h>

int main(){
    int num, resto, binario[8], cont = 0;
    scanf("%d", &num);

    if(num < 0 || num > 255){
        printf("Numero invalido!");
    }else{
        while(num != 0){
            binario[cont] = num % 2;
            num /= 2;
            cont++;
        }
        for(cont;cont>=0;cont--){
            printf("%d", binario[cont]);
        }
    }
}