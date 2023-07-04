#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	int n1, n2, valor;
	char op;
	
	printf("Insira o primeiro numero:");
	scanf("%d", &n1);
	
    printf("Insira o operador:");
	scanf(" %c", &op);
		
	printf("Insira o segundo numero:");
	scanf("%d", &n2);
	
	switch(op){
		case '+':
		{
		 valor=n1+n2;
		 printf("O resultado é: %d\n\n", valor);
		 
		 break;	

		}	
		case '-':
		{
		 valor=n1-n2;
		 printf("O resultado é: %d\n\n", valor);
		 
		 break;	
		}	
		case '*':
		{
		 valor=n1*n2;
		 printf("O resultado é: %d\n\n", valor);
		 
		 break;	
		}
		case '/':
		{
		 valor=n1/n2;
		 printf("O resultado é: %d\n\n", valor);
		 
		 break;	
		}
		default:
	    printf("Operação invalida\n\n");
	    
	}	
	system("pause");
}
