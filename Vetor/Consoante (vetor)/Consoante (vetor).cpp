#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	const int constante = 10;
	int vetor[10],cont,contc,somaconsoante=11;
	char letra[10];
	
	for(cont=0;cont<=10;cont++)
	{
		printf("Digite uma letra:\n");
		scanf(" %c", &letra[cont]);
	}
	
	for(cont=0;cont<=constante;cont++)
	{
		switch (letra[cont]) 
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			{
				somaconsoante = somaconsoante-1;
				break;
			}
		}	
	}
	system("cls");
	printf("A quantidade de consoantes é de %d\n", somaconsoante);
	system("pause");
}

