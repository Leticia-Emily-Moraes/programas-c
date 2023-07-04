#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int cont, pessoas,time,t1=0,t2=0,t3=0,salariot1,salariot2,salarioFinalt1,salarioFinalt2,mediat1=0,mediat2=0,cidade,c1,c2;
	printf("quantas pessoas serão entrevistadas:\n");
	scanf("%d", &pessoas);
	for(cont=1;cont<=pessoas;cont++)
	{
		printf("\nqual time você torce, sendo que :\n 1= São Paulo\n 2=Corinthians\n 3=Outros\n");
		scanf("%d", &time);
		switch(time)
		{
			case 1:
			{
				t1++;
				printf("qual é seu salario:\n");
				scanf("%d", &salariot1);
				salarioFinalt1=salarioFinalt1+salariot1;
				break;
			}
			case 2:
			{
				t2++;
				printf("qual é seu salario:\n");
				scanf("%d", &salariot2);
				salarioFinalt2=salarioFinalt2+salariot2;
				break;
			}
			case 3:
			{
				t3++;
				printf("\nqual cidade você nasceu, sendo que :\n 1= Rio Grande da Serra\n 2=Outros\n");
				scanf("%d", &cidade);
				if(cidade==1)
				{
					c1++;
				}else
				{
					c2++;
				}
				break;
			}
			default:
			{
				printf("opçao invalida, digite novamente\n");
				cont--;
				break;
			}
		}
		
	}
	printf("numero de torcedores por clube:\n");
	printf("São Paulo:%d\n",t1);
	printf("Corinthians:%d\n",t2);
	printf("Outros:%d\n\n",t3);
	
	printf("media de salario por clube:\n");
	mediat1=salarioFinalt1/t1;
	printf("São Paulo:%d\n",mediat1);
	mediat2=salarioFinalt2/t2;
	printf("Corinthians:%d\n\n",mediat2);
	
	printf("Cidade das pessoas que torcem para outros times:\n");
	printf("Rio Grande da Serra:%d\n",c1);
	printf("Outras:%d\n\n",c2);
	
	printf("numero de pessoas entrevistas:%d\n",pessoas);
	system("pause");
}
