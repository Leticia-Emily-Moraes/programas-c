#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	srand(time(NULL));
	
	int x,n,c;
	
	do
	{
		printf("Vamos jogar Pedra, Papel e Tesoura?\nEscolha:\n1-Pedra\n2-Papel\n3-Tesoura\n0-Sair\n");
		scanf("%d", &n);
		printf("Computador: %d\n", c=1+rand()%3);
	}while(n!=0);
}
