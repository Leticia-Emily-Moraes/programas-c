#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	char genero;
	
	printf("Olá! Diga-me seu gênero.\n F-Feminino\n M-Masculino\n O-Outros\n");
	scanf(" %c", &genero);
	
	if (genero == 'F' || genero == 'f') 
	{
		printf ("Olá moça  \3\n");
	}
	else if (genero == 'M' || genero == 'm') 
	{
		printf ("Olá moço  \3\n");
	}
	else 
	{
		printf ("Olá \3\n");
	}

	system("pause");
}
