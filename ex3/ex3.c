#include <stdio.h>

int main(){
	
	int n1, n2, n3, numeroCompleto, quadrado;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	numeroCompleto = n1 * 100 + n2 * 10 + n3;
	quadrado = numeroCompleto * numeroCompleto;
	
	printf("%d, %d", numeroCompleto, quadrado);
	
}
