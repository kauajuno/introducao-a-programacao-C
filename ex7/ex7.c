#include <stdio.h>

int main(){
    double matriz[2][2], det;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    det = matriz[0][0] * matriz [1][1] - matriz[0][1] * matriz[1][0];
    
    printf("O VALOR DO DETERMINANTE E = %.2lf\n", det);
}