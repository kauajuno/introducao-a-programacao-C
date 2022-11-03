#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, streak = 1, highscore = 0;
    int* vec;

    scanf("%d", &num);

    vec = (int*) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++){
        scanf("%d", &vec[i]);
    }

    for(int i = 1; i < num; i++){
        if(vec[i] == vec[i - 1]){
            streak++;
        }else if(streak > highscore){
            highscore = streak;
            streak = 1;
        }else{
            streak = 1;
        }
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", highscore);

    return 0;
}