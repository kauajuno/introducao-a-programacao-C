#include <stdio.h>
#include <math.h>

int main(){
    float l1, l2, l3, semiperimetro, area;

    scanf("%f", &l1);
    scanf("%f", &l2);
    scanf("%f", &l3);

    semiperimetro = (l1 + l2 + l3) / 2;
    area = sqrt(semiperimetro*(semiperimetro-l1)*(semiperimetro-l2)*(semiperimetro-l3));

    printf("A AREA DO TRIANGULO E = %.2f", area);

}