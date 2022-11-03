#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, highscore = 0, streak = 1;
    int *v;

    scanf("%d", &num);

    v = (int*) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 1; i < num; i++){
        if(v[i] == v[i - 1]){
            streak++;
        }else{
            if(streak > highscore) highscore = streak;
            streak = 1;
        }
    }

    if(streak > highscore) highscore = streak;

    printf("STREAK: %d\nHIGHSCORE: %d\n", streak, highscore);

    printf("O comprimento do segmento de numeros iguais e: %d", highscore);

    return 0;

}