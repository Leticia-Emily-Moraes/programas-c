#include <stdio.h>
#include <stdlib.h>

int main(){

	int num;
	
	printf("Numero entre 5 e 15:");
	scanf("%d", &num);
	
	if (num>=5 && num<=15)
	{
		printf("Esta no conjunto!");	
	}
	else 
	{
		printf("nao esta no conjunto!");
	}
		
	
}

