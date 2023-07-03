#include <stdio.h>
#include <stdlib.h>


int main (){
	int premio=13,n;
	
do	{
	printf("insira o numero da sorte entre 0 e 20:\n");
	scanf("%d",&n);
	if(n==premio){
		printf("ACERTOU\3\3\3\n");
		}else{
		printf("errou :( \n tente novamente \n");
		}
	}while(n != premio);
system("pause");
}


