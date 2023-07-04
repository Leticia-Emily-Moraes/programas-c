#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int Linha,Coluna=5;
	char letra [5][5];
	
	for(Linha=0;Linha<5;Linha++)
	{
		for(Coluna=0;Coluna<5;Coluna++)
		{
			if(Linha == Coluna)
			{
				letra [Linha][Coluna]='x';
			}
			else
			{
				letra [Linha][Coluna]=' ';
			}
			
		}
	}
	for(Linha=0;Linha<5;Linha++)
	{
		Coluna--;
		letra [Linha][Coluna]='x';
	}
	for(Linha=0;Linha<5;Linha++)
	{
		for(Coluna=0;Coluna<5;Coluna++)
		{
			printf("%c",letra [Linha][Coluna]);
		}
		printf("\n");
	}
	system("pause");
}
