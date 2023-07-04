#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	const int num=20;
	int lnum[20],cont,resto;
	
	for(cont=0;cont<num;cont++)
	{
		printf("adicione um n�mero: ");
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
