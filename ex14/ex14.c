#include <stdio.h>

int main(){
    float num;
    
    scanf("%f", &num);

    printf("%.1f00000\n%.2f0000\n%.3f000\n", num, num, num);
}