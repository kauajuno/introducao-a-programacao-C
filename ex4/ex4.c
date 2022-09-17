#include <stdio.h>

int main(){

    int horas, minutos, segundos;
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    segundos += minutos * 60 + horas * 3600;

    printf("O TEMPO EM SEGUNDOS E = %d", segundos);
    return 0;
}