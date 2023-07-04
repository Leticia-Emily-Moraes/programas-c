#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	char genero;
	
	printf("Selecione seu Gênero sendo que:\n F- Feminino\n M-Masculino\n O-Outros\n");
	scanf(" %c",&genero);
	
	switch(genero)
	{
		case 'F':
		case 'f':
		{
			printf("Olá Mulher\n");
			break;
		}
		case 'M':
		case 'm':
		{
			printf("Olá Homem\n");
			break;
		}
		case 'O':
		case 'o':
		{
			printf("Olá Pessoa que não se idendifica com os gêneros convencionais\n");
			break;
		}
		default:
			printf("Opção Invalida\n");
			break;
	}
	system("pause");
}
