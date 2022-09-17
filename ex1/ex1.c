#include <stdio.h>

int main(){
	float tempF, tempC, chuvaP, chuvaMM;
	
	scanf("%f", &tempF);
	scanf("%f", &chuvaP);
	
	tempC = 5 * (tempF - 32) / 9;
	chuvaMM = chuvaP * 25.4;
	
	printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", tempC, chuvaMM);
}
