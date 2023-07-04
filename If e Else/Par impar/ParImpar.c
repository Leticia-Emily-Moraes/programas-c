#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a, resto;
	printf("Insira um numero:");
	scanf("%d", &a);
	resto=a%2;
	
	if(resto==0)
	{
		printf("Par\n");
		
	}
	else
	{
		printf("Impar\n");
	}
	system("pause");
}
