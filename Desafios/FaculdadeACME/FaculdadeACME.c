#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char nome[100];
	int curso, adm=800, ads=1300, enfer=850, dire=900, desc=0,desconto, precofinal, porcentagemfinal, precofinal5dia, porcentagem5dia;
	char beneficios,repetir;
	
	printf("Ola, somos a faculdade ACME estamos aqui para fazer seu cadastro para nossa faculdade \3\3\3\n");
	printf("Para comecarmos insira seu nome completo:\n");
	gets (nome);
	system ("cls");
	//pedindo para colocar o nome e guardando na variavel nome
	
	printf("otimo agora escolha um numero de acordo com curso desejado:\n1-Administracao:R$800.00\n2-Analise de Sistemas:R$1300.00\n3-Enfermagem:R$850.00\n4-Direito:R$900.00\n");
	scanf("%d", &curso);
	//pedindo para o candidato escolher o curso
	system ("cls");
	printf(" Descontos sao aplicados nas seguintes condicoes:\n1-Se voce e servidor publico? \n2-Se voce e Aluno oriundo de escola publica? \n3-Se voce ja tem uma graduacao?\nCaso queira mais 5%% de desconto pague antes do 5º dia util do mes\n");
	printf(" Voce se aplica em uma dessas condicoes? (S/N)\n");
	scanf(" %c",&beneficios);
	system ("cls");
	if(beneficios=='s')
	{
		do 
		{
			system ("cls");
			printf("Selecione um numero de acordo com a condicao voce se aplica:\n1-Se voce e servidor publico? \n2-Se voce e Aluno oriundo de escola publica? \n3-Se voce ja tem uma graduacao?\n");
			scanf("%d", &desconto);
			if(desconto==1)
			{
				desc=desc+5;
			}
			else if(desconto==2)
			{
				desc=desc+10;
			}
			else if(desconto==3)
			{
				desc=desc+10;
			}
			else
			{
				printf("Opcao invalida\n");
			}
			printf(" Gostaria de selecionar mais uma condicao? (S/N)\n");
			scanf(" %c", &repetir);
			system ("cls");
		}
		while(repetir=='s');
	}
	//Tabela mostrando as informa�oes selecionadas
	printf("nome do candidato: %s\n", nome);
	//mostrando o nome do candidato
	if (curso == 1)
	{
		printf(" Curso escolhido: Administracao \n");
		printf(" Valor cheio: R$800,00 \n");
	} 
	else if (curso == 2)
	{
		printf(" Curso escolhido: Analise de sistemas \n");
		printf(" Valor cheio: R$1300,00 \n");
	} 
	else if (curso == 3)
	{
		printf(" Curso escolhido: Enfermagem \n");
		printf(" Valor cheio: R$850,00 \n");
	}
	else if  (curso == 4)
	{
		printf(" Curso escolhido: Direito \n");
		printf(" Valor cheio: R$900,00 \n");
	}
	else 
	{
		printf("Voce e um idiota e nao escolheu um curso valido, parabans voce nao fara uma faculdade \3\3 \n");
	}
	//Estrutura decis�o: Mostra o curso e o valor do curso conforme escolhido
	printf(" Total do desconto:%%%d\n", desc);
	//mostrando o desconto depois de responder o questionario
	if (curso == 1)
	{
		porcentagemfinal= adm * desc/100;
		precofinal=adm-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	} 
	else if (curso == 2)
	{
		porcentagemfinal= ads * desc/100;
		precofinal=ads-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	} 
	else if (curso == 3)
	{
		porcentagemfinal= enfer * desc/100;
		precofinal=enfer-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	}
	else if  (curso == 4)
	{
		porcentagemfinal= dire * desc/100;
		precofinal=dire-porcentagemfinal;
		printf(" Valor da mensalidade depois do desconto:R$%d,00\n", precofinal);
	}
	else 
	{
		printf("Voce e um idiota e nao escolheu um curso valido, parabans voce nao fara uma faculdade \3\3 \n");
	}
	porcentagem5dia=precofinal * 5/100;
	precofinal5dia=precofinal-porcentagem5dia;
	printf(" Caso Voce pague antes do 5º dia util o valor pago sera de: R$%d,00\n",precofinal5dia );
	
	system("pause");
	
}
