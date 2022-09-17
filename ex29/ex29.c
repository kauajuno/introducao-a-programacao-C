#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta;

    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta > 0){
        float x1, x2;
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", x1, x2);
    }else if(delta == 0){
        float x;
        x = -b / 2 * a;
        printf("RAIZ UNICA\nX1 = %.2f\n", x);
    }else{
        printf("RAIZES IMAGINARIAS\n");
    }
    
    return 0;
}