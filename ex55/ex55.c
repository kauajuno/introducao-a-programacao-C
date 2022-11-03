#include <stdio.h>

int main(){

    int matricula;
    float hora, salarioHora;

    while(1){
        scanf("%d %f %f", &matricula, &hora, &salarioHora);
        getchar();

        if(matricula == 0 && hora == 0 && salarioHora == 0) break;

        printf("%d %.2f\n", matricula, hora * salarioHora);
    }

    return 0;
}