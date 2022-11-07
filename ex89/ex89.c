#include <stdio.h>
#include <stdlib.h>

int main(){
    int lines, mostFreq, valueMostFreq = 0;
    scanf("%d", &lines);

    int* checkFrequency = (int *) calloc(101, sizeof(int));
    int* vec = (int *) malloc(lines * sizeof(int));

    for(int i = 0; i < lines; i++){
        scanf("%d", &vec[i]);
        checkFrequency[vec[i]]++;
    }

    for(int i = 0; i < 101; i++){
        if(checkFrequency[i] > valueMostFreq){
            mostFreq = i;
            valueMostFreq = checkFrequency[i];
        }
    }

    printf("%d\n%d\n", mostFreq, valueMostFreq);


}