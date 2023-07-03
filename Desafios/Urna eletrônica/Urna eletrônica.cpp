#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <Windows.h>


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int candidatos, lh=0 ,fn=0,a=0, n=0, b=0, candidatos2;
	char cc;
	do{
	
		printf("Olá, bem vind@ a nossa urna :). Escolha seu candidato com os seguintes números:\n 1-Luciano Hulk \n 2-Felipe Neto \n 3-Anitta \n 4-Nulo\n 5-Branco \n");
		scanf("%d", &candidatos);
		printf("Você confirma o voto? (S/N)");
		scanf(" %c", &cc);
		if(cc == 's'||cc == 'S')
		{
			
			switch(candidatos)
			{
				case 1:
				{
					lh++;
					printf("Seu voto foi para o Luciano Huck\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 2:
				{
					fn++;
					printf("Seu voto foi para o Felipe Neto\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 3:
				{
					a++;
					printf("Seu voto foi para a Anitta\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 4:
				{
					n++;
					printf("Seu voto foi Nulo\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 5:
				{
					b++;
					printf("Seu voto foi Branco\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				default:
				{
					printf("Opçaõ Invalida");
					system("cls");
					break;
				}
				
			}
			
		}
		else if (cc == 'n'||cc == 'N')
		{
		system("cls");
		printf("Escolha seu candidato com os seguintes números:\n 1-Luciano Hulk\n 2-Felipe Neto\n 3-Anitta \n 4-Nulo\n 5-Branco\n");
		scanf("%d", &candidatos2);
		switch(candidatos2)
		{
				case 1:
				{
					lh++;
					printf("Seu voto foi para o Luciano Huck\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 2:
				{
					fn++;
					printf("Seu voto foi para o Felipe Neto\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 3:
				{
					a++;
					printf("Seu voto foi para a Anitta\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 4:
				{
					n++;
					printf("Seu voto foi Nulo\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				case 5:
				{
					b++;
					printf("Seu voto foi Branco\n");
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						printf("\a");
						Sleep(1000);
						system("cls");
					break;
				}
				default:
				{
					printf("Opçaõ Invalida");
					break;
				}
				
			}
		}
	}
	while(candidatos != -1);
	printf("Os votos foram:\nCandidato Luciano Huck:%d\nCandidato Felipe Neto:%d\nCandidato Anitta:%d\nVotos Nulo:%d\nVotos Branco:%d\n\n",lh,fn,a,n,b);
	if(lh> fn && lh> a)
	{
		printf("O vencedor é o Luciano Huck com %d votos\n\n",lh);
	}
	else if (fn> lh && fn> a)
	{
		printf("O vencedor é o Felipe Neto com %d votos\n\n",fn);
	}
	else if (a> lh && a> fn)
	{
		printf("O vencedor é a Anitta com %d votos\n\n",a);
	}
	else
	{
		printf("Ocorreu empate\nEspere o segundo Turno\n\n");
	}
	system("pause");
}
