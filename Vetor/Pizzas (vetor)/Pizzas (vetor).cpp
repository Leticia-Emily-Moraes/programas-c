#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	const int constante = 50
	;
	int pizzas[50],cont,pizzasgratis;
	
	
	for(cont=0;cont<constante;cont++){
		printf("Digite a quantidade de pizzas que o cliente retirou durante o ano de 2021\n");
		scanf("%d", &pizzas[cont]);
	}
	
	for(cont=0;cont<constante;cont++){
		pizzasgratis = pizzas[cont] / 10;
		printf("cliente %d tem direito a %d pizzas grátis\n,", cont,pizzasgratis);
	}
}
