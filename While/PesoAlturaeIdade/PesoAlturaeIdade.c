#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int idade, idade50=0, peso, peso40=0, altura1=0, cont=1, p=0;
	float altura;
	
	printf("Quantas pessoas serão entrevistadas:\n");
	scanf ("%d",&p);
	while(cont<=p)
	{

		printf("Insira sua idade:\n");
		scanf("%d", &idade);
		if(idade>50)
		{
			idade50++;
		}
		printf("Insira sua altura:\n");
		scanf("%f", &altura);
		if(altura>1 && altura<2)
		{
			altura1++;
		}
		printf("Insira seu peso:\n");
		scanf("%d", &peso);
		if(peso<40)
		{
			peso40++;
		}
	
		cont++;
		system("cls");
	}
	
	system("cls");
	printf("Tem %d com mais de 50 anos\n", idade50);
	printf("Tem %d com a altura entre 1 e 2 metros\n", altura1);
	printf("Tem %d com menos de 40 kg\n", peso40);
	
	system("pause");
}

