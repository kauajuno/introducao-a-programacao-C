#include <stdio.h>

int main(){
    int comeco, passo, elementos, limite, soma = 0;

    scanf("%d %d %d", &comeco, &passo, &elementos);

    limite = comeco + passo * elementos;

    for(int elemento = comeco; elemento < limite; elemento += passo){
        soma += elemento;
    }

    printf("%d\n", soma);

    return 0;
}