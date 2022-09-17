#include <stdio.h>

int main(){
    int dinheiro, n100, n50, n10, n1;

    scanf("%d", &dinheiro);

    n100 = dinheiro / 100;
    dinheiro %= 100;

    n50 = dinheiro / 50;
    dinheiro %= 50;

    n10 = dinheiro / 10;
    dinheiro %= 10;

    n1 = dinheiro;
    
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", n100, n50, n10, n1);

}