#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int n, cont=0,calculo;
	while(cont<10)
	{
		printf("%d informe um numero:\n", cont);
		scanf("%d", &n);
		calculo = n%2;
		if(calculo==0)
		{
			printf("numero par\n");
		}
		else
		{
			printf("numero impar\n");
		}
		if(n<=100 && n>=0)
		{
			printf("o numero esta entre 0 e 100\n");
		}
		else
		{
			printf("o numero passa de 100\n");
		}
		cont++;	
	}
	system("pause");
}

