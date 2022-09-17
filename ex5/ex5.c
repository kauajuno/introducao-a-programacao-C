#include <stdio.h>
#include <math.h>

int main(){
    float volPiramide, areaBasePiramide, arestaBasePiramide, alturaPiramide;

    scanf("%f %f", &alturaPiramide, &arestaBasePiramide);

    areaBasePiramide = 3 * pow(arestaBasePiramide, 2) * sqrt(3) / 2;
    volPiramide = areaBasePiramide * alturaPiramide / 3;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS", volPiramide);

}