#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int c1=0,c2=0,c3=0,c4=0,pessoas,cidade, cont=1;
	printf("Quantas pessoas serão entrevistadas:");
	scanf("%d", &pessoas);
	system("cls");
	while(cont<=pessoas)
	{
		printf("(%d)Selecione um número de acordo com a cidade que você Nasceu:\n1-Rio grande da serra\n2-Ribeirao Pires\n3-Maua\n4-Outros\n", cont);
		scanf("%d", &cidade);
		cont++;
		switch(cidade)
		{
			case 1:
			{
				c1=c1+1;
				break;
			}
			case 2:
			{
				c2=c2+1;
				break;
			}
			case 3:
			{
				c3=c3+1;
				break;
			}
			case 4:
			{
				c4=c4+1;
				break;
			}
			default:
			{
				printf("Opção invalida\n");
				cont--;
			}
		}
	system("cls");
	}
	printf("Rio Grande da Serra= %d\n", c1);
	printf("Ribeirão Pires= %d\n", c2);
	printf("Maua= %d\n", c3);
	printf("Outros= %d\n", c4);
	system("pause");
}
