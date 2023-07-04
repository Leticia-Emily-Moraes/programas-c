#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	float preco, valor;
	char op;
	
	printf("Valor Produto:");
	scanf("%f",&preco);
	
	printf("Op��o de pagamento:\n A- a vista 10%% de desconto\n B- a vista cartao 15%% de desconto\n C- Duas vezes sem juros\n D- 3 vezes juros de 10%%\n");
	scanf(" %c",&op);
	
	if(op=='A')
	{
		valor=preco-(preco*10/100);
		printf("Valor a pagar a vista com 10%% de desconto: R$ %.2f\n", valor);
		
	}
	else if (op=='B')
	{
		valor=preco-(preco*15/100);
		printf("Valor a pagar a vista com cart�o com 15%% de desconto: R$ %.2f\n", valor);
		
	}
	else if (op=='C')
	{
		valor=preco/2;
		printf("Valor da parcela 2 vezes sem juros: R$ %.2f\n", valor);
	}
	else if(op=='D')
	{
		valor=(preco*10/100)+preco;
		printf("Valor a pagar em 3 vezes com 10%% de juros: R$ %.2f\n", valor);
		printf("Valor da parcela: %.2f\n", valor/3);		
		
	}else
	{
		printf("Op��o invalida!!!!\n");
	}
	
		
	system("pause");
	
	
}
