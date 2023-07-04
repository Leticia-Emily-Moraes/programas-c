#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int A,B,C, soma;
	
	printf("Valor A: ");
	scanf("%d", &A);
	
	printf("Valor B: ");
	scanf("%d", &B);	
	
	printf("Valor C: ");
	scanf("%d", &C);	
		
	soma=A+B;
	
	if(soma<C)
	{
		printf("Soma de %d e %d e menor que %d\n", A,B,C);	
	}
	else 
	{
		printf("Soma de %d e %d e maior que %d\n", A,B,C);
	}
	system("pause");
}
