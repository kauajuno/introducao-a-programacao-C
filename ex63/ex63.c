#include <stdio.h>
// O exercício não especifica como o código deve parar

int main(){

    unsigned long int codigo, codigoMaiorLucro, codigoMaisVendida;
    float precoCompra, precoVenda, lucro, totalCompra = 0, totalVenda = 0, maiorLucro = 0;
    int numeroVendas, contBaixo = 0, contMedio = 0, contAlto = 0, maiorNumeroVendas = 0;
    
    while(scanf("%lu %f %f %d", &codigo, &precoCompra, &precoVenda, &numeroVendas) != EOF){
        if(codigo == 0) break;

        totalCompra += precoCompra * numeroVendas;
        totalVenda += precoVenda * numeroVendas;
        lucro = (precoVenda - precoCompra) / precoCompra * 100;

        if(lucro < 10) contBaixo++;
        else if(lucro > 20) contAlto++;
        else contMedio++;

        if(lucro > maiorLucro){
            codigoMaiorLucro = codigo;
            maiorLucro = lucro;
        }

        if(numeroVendas > maiorNumeroVendas){
            codigoMaisVendida = codigo;
            maiorNumeroVendas = numeroVendas;
        }
    }

    lucro = (totalVenda - totalCompra) / totalCompra * 100;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", contBaixo);
	printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", contMedio);
	printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", contAlto);
	printf("Codigo da mercadoria que gerou maior lucro: %lu\n", codigoMaiorLucro);
	printf("Codigo da mercadoria mais vendida: %lu\n", codigoMaisVendida);
	printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", totalCompra, totalVenda, lucro);

	return 0;

}