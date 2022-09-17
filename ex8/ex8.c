#include <stdio.h>
#define PRECOMETROQUAD 100.0
#define PI 3.14159

int main(){

    double custoTotal, areaCilindro, areaCirculo, areaLateral, raio, altura;

    scanf("%lf", &raio);
    scanf("%lf", &altura);

    areaLateral = 2 * PI * raio * altura;
    areaCirculo = PI * raio * raio;
    areaCilindro = 2 * areaCirculo + areaLateral;

    custoTotal = PRECOMETROQUAD * areaCilindro;

    printf("O VALOR DO CUSTO E = %.2lf", custoTotal);

    return 0;
}