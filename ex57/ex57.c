#include <stdio.h>
#include <math.h>

// PROGRAMA NÃO FUNCIONAL: o exercício não explicita como se calcula o erro em cada iteração, de resto funciona
int main(){

    double n, erro, ranterior, ratual, erroloop;

    ranterior = 1;

    scanf("%lf", &n);
    scanf("%lf", &erro);

    do{
        ratual = (ranterior + n / ranterior) / 2;
        erroloop = fabs(ratual - ranterior) / 2;

        printf("r: %.9f, err: %.9f\n", ratual, erroloop);

        ranterior = ratual;

    }while(fabs(n - pow(ratual, 2)) > erro);

    printf("%.9f\n%.9f\n", fabs(n - pow(ratual, 2)), erro);



    return 0; 

}