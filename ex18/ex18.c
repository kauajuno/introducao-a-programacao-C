#include <stdio.h>

int main(){
    float aux, a, b, c, d, e, f, x, y, diffY, diffRes;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    aux = a;

    a *= d;
    b *= d;
    c *= d;

    d *= aux;
    e *= aux;
    f *= aux;

    diffY = b - e;
    diffRes = c - f;

    y = diffRes / diffY;

    x = (c - b * y) / a;

    printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x, y);

    return 0;
}