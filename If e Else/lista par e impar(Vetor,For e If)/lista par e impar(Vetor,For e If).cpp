#include <stdio.h>
#include <stdlib.h>
#include <locale>

int main() 
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	const int num=20;
	int lnum[num],cont,resto;
	
	for(cont=0;cont<num;cont++)
	{
		printf("adicione um número: ");
		scanf("%d", &lnum[cont]);
	}
	
	for(cont=0;cont<num;cont++)
	{
		resto=lnum[cont]%2;
		if (resto==1)
		{
			printf("%d impar\n", lnum[cont]);
		}
		else
		{
		
			printf("%d par\n", lnum[cont]);
		}
	}
	system ("pause");
}
