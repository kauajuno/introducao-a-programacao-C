#include <stdio.h>
#define PRECOPOPULAR 1
#define PRECOGERAL 5
#define PRECOARQUIBANCADA 10
#define PRECOCADEIRAS 20

int main(){
    int testes, specs, cont = 1;
    float catPopular, catGeral, catArquibancada, catCadeiras, rendaTotal;

    scanf("%d", &testes);

    for(int i = 0; i < testes; i++){
        scanf("%d %f %f %f %f", &specs, &catPopular, &catGeral, &catArquibancada, &catCadeiras);
        
        catPopular /= 100;
        catGeral /= 100;
        catArquibancada /= 100;
        catCadeiras /= 100;

        rendaTotal = specs * (catPopular * PRECOPOPULAR + catGeral * PRECOGERAL + catArquibancada * PRECOARQUIBANCADA + catCadeiras * PRECOCADEIRAS);
        printf("A RENDA DO JOGO N. %d E = %.2f\n", cont, rendaTotal);
        cont++;
    }
}