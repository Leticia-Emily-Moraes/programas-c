#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	const int num=10, numi=0;
	int inteiro[num],cont,conti;
	for(cont=0;cont<=num;cont++)
	{
		printf("(%d)adicione um número: ",cont);
		scanf("%d", &inteiro[cont]);
	}
	system("cls");
	
	for(conti=10;conti>=numi;conti--)
	{
		printf("(%d)%d\n",conti, inteiro[conti]);
	}
	
	
	system("pause");
}
