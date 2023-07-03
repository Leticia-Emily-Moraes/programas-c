#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese_Brazil");
	char media;
	
	printf("Media:");
	scanf(" %c",&media);

	switch(media)
	{
		case 'A':
		case 'B':
		case 'C':
		case 'a':
		case 'b':
		case 'c':
		{
			printf("Aprovado!!! \3\3\n");
			break;
		}
		case 'D':
		case 'd':
		{
			printf("Reprovado =(\n");
			break;
		}
		default: 
		printf("Media invalida!!!");
		
	}	
	system("pause");
}
