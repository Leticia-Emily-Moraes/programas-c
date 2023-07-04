#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	int cont=0;
	do
	{
		printf("%d - Estava com saudade de TPA \3\3\3\3 \n", cont);
		cont++;
	}
	while(cont<=100);
	
	system("pause");
}
