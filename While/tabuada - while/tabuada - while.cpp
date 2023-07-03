#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int numtab,cont=1,num=0, mult, tab;
	printf("Digite um número:\n");
	scanf("%d", &numtab);
	
	while (cont<=11){
		mult = numtab * num;
		printf("%d X %d = %d \n" ,numtab , num, mult);
		cont++;
		num ++;
		
	}
	system("pause");
	
}
