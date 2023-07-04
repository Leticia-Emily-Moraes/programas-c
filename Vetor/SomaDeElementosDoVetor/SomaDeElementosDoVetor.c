#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	const int constan=5;
	int pvetor[5], svetor[5],soma[5],cont;
	
	for(cont=0;cont<=constan;cont++)
	{
		printf("(%d)Insira um número para o primeiro conjunto \n", cont);
		scanf("%d", &pvetor[cont]);
	}
	
	for(cont=0;cont<=constan;cont++)
	{
		printf("(%d)Insira um número para o segundo conjunto \n", cont);
		scanf("%d", &svetor[cont]);
	}
		
	for(cont=0;cont<=constan;cont++)
	{
		soma[cont]=pvetor[cont]+svetor[cont];
	}
		for(cont=0;cont<=constan;cont++){
		printf("(%d)Soma dos números do vetor:%d\n", cont, soma[cont]);	
	}
}
