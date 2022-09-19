#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isTriangle(float l1, float l2, float l3){
    return abs(l1 - l2) < l3 < (l1 + l2) && abs(l1 - l3) < l2 < (l1 + l3) && abs(l2 - l3) < l1 < (l2 + l3);
}

int main(){
    float l1, l2, l3;

    scanf("%f %f %f", &l1, &l2, &l3);

    if(isTriangle(l1, l2, l3)) printf("Perimetro = %.1f\n", l1 + l2 + l3);
    else printf("Area = %.1f\n", (l1 + l2) * l3 / 2);

    return 0;
}