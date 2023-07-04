#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int l,c,num[5][5],x,controle=0;
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			printf("Insira um número:");
			scanf("%d", &num[l][c]);
		}
	}
	
	printf("Digite um valor para encontrar: ");
	scanf("%d", &x);
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			
			if(x==num[l][c]){
			    printf("Linha %d ", l);
				printf("Coluna %d\n", c);
					controle++;
			}	
		}
	}
	if(controle==0){
		printf("Não Encontrado\n");
	}
	system("pause");
}
