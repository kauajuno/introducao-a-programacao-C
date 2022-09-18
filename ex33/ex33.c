#include <stdio.h>

int main(){
    int matricula, numDependentes;
    float salMin, salFuncionario, taxaImposto, impostoBruto, impostoLiquido, resultado;

    scanf("%d %f %d %f %f", &matricula, &salMin, &numDependentes, &salFuncionario, &taxaImposto);

    if(salFuncionario > 12 * salMin) impostoBruto = salFuncionario * 0.2;
    else if(salFuncionario > 5 * salMin) impostoBruto = salFuncionario * 0.08;
    else impostoBruto = 0;

    impostoLiquido = impostoBruto - 300 * numDependentes;
    taxaImposto = taxaImposto * salFuncionario / 100;
    resultado = impostoLiquido - taxaImposto;

    printf("MATRICULA = %d\n", matricula);
    printf("IMPOSTO BRUTO = %.2f\n", impostoBruto);
    printf("IMPOSTO LIQUIDO = %.2f\n", impostoLiquido);
    printf("RESULTADO = %.2f\n", resultado);

    if (resultado < 0){
	    printf("IMPOSTO A RECEBER\n");
	} else if (resultado == 0){
		printf("IMPOSTO QUITADO\n");
	} else if (resultado > 0){
		printf("IMPOSTO A PAGAR\n");
	}

    return 0;
}