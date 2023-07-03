#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	int l,c,num[3][3];
	
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			
			printf("Digite um número por favor:");
			scanf("%d", &num[l][c]);
			
		}
	}
	
	system("cls");
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			
			if(num[l][c]>10){
				printf("%d ", num[l][c]);
			}else{
				printf(" ");
			}
			
			
		}
		
		printf("\n");
	}
}


