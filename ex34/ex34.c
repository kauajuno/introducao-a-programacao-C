#include <stdio.h>

int main()
{
    int pal[5], num, size;
    while (1){
        scanf("%d", &num);
        size = 0;

        while (num != 0){
            pal[size] = num % 10;
            num /= 10;
            size++;
        }

        switch (size){
        case 1:
            printf("PALINDROMO\n");
            break;

        case 2:
            if (pal[0] == pal[1])
                printf("PALINDROMO\n");
            else
                printf("NAO PALINDROMO\n");
            break;

        case 3:
            if (pal[0] == pal[2])
                printf("PALINDROMO\n");
            else
                printf("NAO PALINDROMO\n");
            break;

        case 4:
            if (pal[0] == pal[3] && pal[1] == pal[2])
                printf("PALINDROMO\n");
            else
                printf("NAO PALINDROMO\n");
            break;

        case 5:
            if (pal[0] == pal[4] && pal[1] == pal[3])
                printf("PALINDROMO\n");
            else
                printf("NAO PALINDROMO\n");
            break;
        }
    }
    return 0;
}