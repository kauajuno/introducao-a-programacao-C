#include <stdio.h>
#include <stdbool.h>

bool isPrimo(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

bool checkDiv(int num, int div){
    // retorna 1 se possível dividir, do contrário retorna 0
    return (num % div == 0);
}

int main(){
    int div = 2, num1, num2, num3, mmc = 1;
    int pass, c1, c2, c3;

    scanf("%d %d %d", &num1, &num2, &num3);

    while(num1 != 1 || num2 != 1 || num3 != 1){
        pass = false;

        c1 = checkDiv(num1, div);
        c2 = checkDiv(num2, div);
        c3 = checkDiv(num3, div);

        pass = c1 + c2 + c3;

        if(pass == false){
            div++;
            while(isPrimo(div) == false) div++;
        }else{
            mmc = mmc * div;
            printf("%d %d %d :%d\n", num1, num2, num3, div);

            if(c1) num1 /= div;
            if(c2) num2 /= div;
            if(c3) num3 /= div;
            
        }
    }

    printf("MMC: %d", mmc);

    return 0;
}