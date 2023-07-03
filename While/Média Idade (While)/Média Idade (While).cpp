#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade, idadeFinal, cont = 1;
	float media;
	
	while(cont<=15)
	{
		printf("Digite a idade:");
		scanf("%d", &idade);
		cont++;
		idadeFinal=idade+idadeFinal;	
	}
	
	media=idadeFinal/15;	
	printf("a media de idade é %f\n", media);
	
	system("pause");
}

