#include <stdio.h>

int main(){
    float mediaImpar = 0, mediaPar = 0;
    int num, contPar = 0, contImpar = 0;

    for(;;){
        scanf("%d", &num);

        if(num == 0) break;
        
        if(num % 2 == 0){
            mediaPar += num;
            contPar++;
        }else{
            mediaImpar += num;
            contImpar++;
        }
    }

    mediaPar = mediaPar / contPar;
    mediaImpar = mediaImpar / contImpar;

    printf("MEDIA PAR: %f\nMEDIA IMPAR: %f\n", mediaPar, mediaImpar);

    return 0;
}