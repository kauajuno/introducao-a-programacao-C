#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int contAchado = 0, n, auxi, auxj, flag;

    scanf("%d", &n);

    int* achado = (int *) malloc(n * sizeof(int));

    for(int i = 1; i < 2000; i++){
        for(int j = 1; j < 2000; j++){
            if(i != j){
                auxi = 0;
                auxj = 0;
                flag = 0;
                for(int conti = 1; conti < (i / 2 + 1); conti++) if(i % conti == 0) auxi += conti;
                for(int contj = 1; contj < (j / 2 + 1); contj++) if(j % contj == 0) auxj += contj;
                if(auxi == j && auxj == i){
                    for(int cont = 0; cont < n; cont++){
                        if(achado[cont] == j){
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 0){
                        printf("(%d,%d)\n", i, j);
                        achado[contAchado] = i;
                        contAchado++;
                        if(contAchado == n) exit(0);
                    }else{
                        break;
                    }
                }
            }
        }
    }
}