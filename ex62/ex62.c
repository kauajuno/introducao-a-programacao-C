#include <stdio.h>
#include <math.h>

int main(){

    int n, limite;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        limite = i;
        for(int cateto1 = 1; cateto1 < limite; cateto1++){
            for(int cateto2 = 1; cateto2 < i; cateto2++){
                if(i == sqrt(pow(cateto1, 2) + pow(cateto2, 2))){
                    printf("hipotenusa = %d, catetos %d e %d\n", i, cateto1, cateto2);
                    limite = cateto2;
                    break;
                }
            }
        }
    }

    return 0;
}