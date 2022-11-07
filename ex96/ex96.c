#include <stdio.h>
#include <math.h>

int main(){
    int NC;
    float v1[3], v2[3], highestAbs, comp;

    scanf("%d", &NC);
    NC--;

    scanf("%f %f %f", &v1[0], &v1[1], &v1[2]);

    while(NC--){
        scanf("%f %f %f", &v2[0], &v2[1], &v2[2]);
        highestAbs = 0;

        for(int i = 0; i < 3; i++){
            comp = abs(v1[i] - v2[i]);
            if(comp > highestAbs) highestAbs = comp;
        }

        printf("%.2f\n", highestAbs);

        for(int i = 0; i < 3; i++) v1[i] = v2[i];
    }

    return 0;
}