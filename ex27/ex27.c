#include <stdio.h>

int determinaOrdem(int numero[]){
    for(int cont = 3; cont >= 0; cont--){
        if(numero[cont] != 0) return cont + 1;
    }
}

int main(){
    int padrao[4] = {1, 10, 100, 1000};
    int number, numbercopy, storage[4], ordem;

    scanf("%d", &number);
    numbercopy = number;

    for(int i = 0; i < 4; i++){
        storage[i] = number % 10;
        number /= 10;
    }

    switch(determinaOrdem(storage)){
        case 1:
            printf("(primeira ordem) %d = %d unidade", numbercopy, storage[0]);
            if(storage[0] != 1) printf("s");
            break;

        case 2:
            printf("(segunda ordem) %d = %d dezena", numbercopy, storage[1]);
            if(storage[1] != 1) printf("s");

            if(storage[0] != 0){
                printf(" + %d unidade", storage[0]);
                if(storage[0] != 1) printf("s");
            }
            break;

        case 3:
            printf("(terceira ordem) %d = %d centena", numbercopy, storage[2]);
            if(storage[2] != 1) printf("s");

            if(storage[1] != 0){
                printf(" + %d dezena", storage[1]);
                if(storage[1] != 1) printf("s");
            }
            if(storage[0] != 0){
                printf(" + %d unidade", storage[0]);
                if(storage[0] != 1) printf("s");
            }
            break;

        case 4:
            printf("(quarta ordem) %d = %d unidade", numbercopy, storage[3]);
            if(storage[3] != 1) printf("s");
            printf(" de milhar");

            if(storage[2] != 0){
                printf(" + %d centena", storage[2]);
                if(storage[2] != 1) printf("s");
            }
            if(storage[1] != 0){
                printf(" + %d dezena", storage[1]);
                if(storage[1] != 1) printf("s");
            }
            if(storage[0] != 0){
                printf(" + %d unidade", storage[0]);
                if(storage[0] != 1) printf("s");
            }
            break;
    }

    printf(" = ");

    for(int cont = 3, flag = 0; cont >= 0; cont--){
        if(storage[cont] != 0){
            if(flag > 0) printf(" + ");
            printf("%d", storage[cont] * padrao[cont]);
            flag++;
        }
    }

    return 0;
}