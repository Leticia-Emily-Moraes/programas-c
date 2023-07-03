#include <stdio.h>
#include <stdlib.h>

int main () {
	int senha;
	printf("insira a senha:");
	scanf("%d", &senha);
	
	if(senha==1234){
		 printf("acesso liberado\n");
	}else{
		printf("acesso negado\n");
	}
	system("pause");
      
    
}
