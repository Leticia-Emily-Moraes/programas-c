#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int cont=1;
	while(cont<=25)
	{
		printf("Eu AMO estudar lógica de programação \n");
		cont++;
	}
	system("pause");
}
