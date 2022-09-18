#include <stdio.h>

void swap(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}

void order(int *n1, int *n2, int *n3){
    if(*n1 > *n2) swap(n1, n2);
    if(*n2 > *n3) swap(n2, n3);
    if(*n1 > *n2) swap(n1, n2);
}

void printChosen(int n1, int n2, int n3, char detect){
    switch(detect){
        case 'A':
            printf("%d", n1);
            break;

        case 'B':
            printf("%d", n2);
            break;

        case 'C':
            printf("%d", n3);
            break;
    }
}

int main(){
    int n1, n2, n3;
    char c1, c2, c3;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    getchar();
    order(&n1, &n2, &n3);

    scanf("%c %c %c", &c1, &c2, &c3);

    printChosen(n1, n2, n3, c1);
    printf(" ");
    printChosen(n1, n2, n3, c2);
    printf(" ");
    printChosen(n1, n2, n3, c3);
    printf("\n");
    
}