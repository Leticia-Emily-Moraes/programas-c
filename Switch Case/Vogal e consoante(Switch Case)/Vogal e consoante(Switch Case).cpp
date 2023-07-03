#include <stdio.h>
#include <stdlib.h>

int main()
{
	char letra;
	
	printf("Insira uma letra:");
	scanf(" %c", &letra);
	
	switch(letra)
	{
		
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		{
			printf("vogal\n");
			break;
		}
		default:
			printf("consoante\n");
		
    }
    system("pause");
}
