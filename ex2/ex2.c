#include <stdio.h>

int main(){
	float salarioMin, kwGastos, kwPreco, contaTotal, contaDesconto;
	
	scanf("%f", &salarioMin);
	scanf("%f", &kwGastos);
	
	kwPreco = salarioMin * 0.007;
	contaTotal = kwPreco * kwGastos;
	contaDesconto = contaTotal * 0.9;
	
	printf("Custo por kW: R$ %.2f\nCusto do consumo: R$ %.2f\nCusto com desconto: R$ %.2f\n", kwPreco, contaTotal, contaDesconto);
	
	return 0;
}
