#include <stdio.h>

int inverteNum(int num){
    int inverso = 0, sobra;
    while(num != 0){
        sobra = num % 10;
        inverso = inverso * 10 + sobra;
        num /= 10;
    }

    return inverso;
}

int main(){
    int casos, num1, num2;

    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
        scanf("%d", &num1);
        scanf("%d", &num2);

        num1 = inverteNum(num1);
        num2 = inverteNum(num2);

        if(num1 > num2) printf("%d\n", num1);
        else printf("%d\n", num2);
        
    }
}