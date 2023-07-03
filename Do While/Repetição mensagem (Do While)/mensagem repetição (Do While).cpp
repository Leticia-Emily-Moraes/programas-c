#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	char resposta ;
	do
	{
	printf("Estava com saudade de TPA \3\3\3\3 \n");
	printf("Você quer ver a mensagem novamente?");
	scanf(" %c", &resposta);
	
	}
	while(resposta == 'S' || resposta == 's' );
	
	system("pause");
}
