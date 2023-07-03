#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char resp;
	do	
	{
		printf("Muito muito cansada =)\n\n");
		
		printf("Ler novamente?\n S ou s para repetir\n");
		scanf(" %c", &resp);
		system("cls");
	}
	while(resp=='S' || resp=='s');
}
