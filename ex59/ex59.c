#include <stdio.h>

int main(){
    int graos, total, quadrosBrancos = 0, quadrosPretos = 1;

    scanf("%d", &graos);

    total = graos;


    for(int seq = 2; seq <= 8; seq++){
        if(seq % 2 == 0) quadrosBrancos += 2;
        else quadrosPretos += 2;

        total += 2 * graos * quadrosPretos + graos * quadrosBrancos;
    }

    printf("%d\n", total);

    return 0;
}