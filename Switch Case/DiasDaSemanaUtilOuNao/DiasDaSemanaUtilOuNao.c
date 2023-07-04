#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int dia;
	
	printf("Digite um numero de acordo com os dias da semana descrito abaixo\n 1-Domingo\n 2-Segunda-feira\n 3-Terca-feira\n 4-Quarta-Feira\n 5-Quinta-Feira\n 6-Sexta-Feira\n 7-Sabado\n:");
	scanf("%d", &dia);
	
	switch(dia)
	{
		case 2:
	    case 3:
        case 4:
        case 5:
        case 6:
		{
        	printf("dia util\n");
        	break;
        }
        case 1:
        case 7:
		{
        	printf("Final de semana\n");
        	break;
        }
        default:
        	printf("dia invalido\n");   	
	}
	system("pause");
}

