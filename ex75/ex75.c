#include <stdio.h>
#include <stdbool.h>

bool isThereNext(int n, int i, int copy){
    n /= i;
    if (n % i == 0)
        return true;
    for (int cont = i + 1; cont < (copy / 2 - 1); cont++){
        if (n % cont == 0)
            return true;
    }
    return false;
}

int main(){
    int N, copy;
    bool firstTime = true;

    while (scanf("%d", &N) != EOF){

        if (N > 1){
            copy = N;
            for (int i = 2; i < (copy / 2 + 1); i++){
                while (N % i == 0){
                    if (!isThereNext(N, i, copy) && firstTime){
                        printf("Fatoracao nao e possivel para o numero %d!\n", copy);
                        break;
                    }
                    else if (isThereNext(N, i, copy) && firstTime){
                        printf("%d = %d x ", copy, i);
                        firstTime = false;
                        N /= i;
                    }
                    else if (isThereNext(N, i, copy) && !firstTime){
                        printf("%d x ", i);
                        N /= i;
                    }
                    else if (!isThereNext(N, i, copy) && !firstTime){
                        printf("%d\n", i);
                        N /= i;
                    }
                }
            }
        }else{
            printf("Fatoracao nao e possivel para o numero %d!\n", N);
        }
    }
}