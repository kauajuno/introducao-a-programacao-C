#include <stdio.h>

int main(){
    int comeco, repeticoes, limite;

    scanf("%d %d", &comeco, &repeticoes);

    limite = comeco + repeticoes * 2;

    if(comeco % 2 == 1) printf("O PRIMEIRO NUMERO NAO E PAR\n");
    else{
        for(comeco; comeco < limite; comeco += 2){
            printf("%d ", comeco);
        }
    }
}