#include <stdio.h>
#include <stdlib.h>

int main(){
    int totalNumbers, totalErase, number, lowest, lowestPos;
    while(scanf("%d %d", &totalNumbers, &totalErase) != EOF){

        int *v = malloc(totalNumbers * sizeof(int));
        scanf("%d", &number);

        for(int i = totalNumbers - 1; i >= 0; i--){
            v[i] = number % 10;
            number /= 10;
        }

        while(totalErase--){
            lowest = 10;
            for(int i = 0; i < totalNumbers; i++){
                if(v[i] != -1 && v[i] < lowest){
                    lowest = v[i];
                    lowestPos = i;
                }
            }
            v[lowestPos] = -1;
        }
        
        for(int i = 0; i < totalNumbers; i++) if(v[i] != -1) printf("%d", v[i]);
        printf("\n");
    }

    return 0;
}