#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int Linha,Coluna,letra [3][3];
	
	for(Linha=0;Linha<3;Linha++)
	{
		for(Coluna=0;Coluna<3;Coluna++)
		{
			printf("Insira sua Idade:");
			scanf("%d", &letra [Linha][Coluna]);
		}
	
	}
	system("cls");
	for(Linha=0;Linha<3;Linha++)
	{
		for(Coluna=0;Coluna<3;Coluna++)
		{
			printf("%d ",letra [Linha][Coluna]);
		}
	printf("\n");
	}
	system("pause");
}
