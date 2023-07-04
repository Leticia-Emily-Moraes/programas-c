#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int inicio, fim,cont, resto;
	
	printf("insira o primeiro numero:\n");
	scanf("%d",&inicio);
	
	printf("insira o ultimo numero:\n");
	scanf("%d",&fim);
	
	for(cont=inicio;cont<=fim;cont++)
	{
		resto=cont%2;
		if (resto==1)
		{
			printf("%d impar\n", cont);
		}
	}
	system("pause");
}
