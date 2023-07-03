#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float n1,n2,n3,mediaFinal;
	
	printf("Insira uma nota:");
	scanf ("%f", &n1);
	
	printf("Insira outra nota:");
	scanf("%f", &n2);
	
	printf("Insira outra nota:");
	scanf("%f", &n3);
	
	mediaFinal=(n1+n2+n3)/3;
	
	printf("Média final: %1.f \n", mediaFinal);
	
	system("pause");
}
