#include <stdio.h>

int main(){
    int loops;
    float farenheit, celsius;

    scanf("%d", &loops);
    for(int i = 0; i < loops; i++){
        scanf("%f", &farenheit);
        celsius = 5 * (farenheit - 32) / 9;
        printf("%.2f FARENHEIT EQUIVALE A %.2f CELSIUS\n", farenheit, celsius);
    }
    
    return 0;
}