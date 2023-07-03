#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	setlocale (LC_ALL, "Portuguese_Brazil");
	void Menu (void);
	int Caixa (void);
	
	Menu ();
	Caixa ();
	
}
void Menu (void){
	printf("Bem vindo a Sorveteria Malê!!!\n\n");
	printf("Código: A | Produto: Refrigerante | Preço: R$ 3,50\nCódigo: B | Produto: Casquinha Simples | Preço: R$ 4,00\nCódigo: C | Produto: Casquinha Dupla | Preço: R$ 5,50\nCódigo: D | Produto: Sundae | Preço: R$7,50 \nCódigo: E | Produto: Banana Split | Preço: R$ 9,00\n\n");
	
}
int Caixa (void){
	int qr,qcs,qcd,qs,qb,qt,q=0;
	float pr=0,pcs=0,pcd=0,ps=0,pb=0,tov;
	char c='z', r;
	float t;
	void Relatorio (int a, int b,int c,int d,int e,float pa, float pb,float pc,float pd,float pe,float pt);
	do{
		do{
			printf("Coloque o código do produto que queira consumir:");
			scanf(" %c", &c);
			printf("Coloque a quantidade do produto que queira consumir:");
			scanf("%d", &q);
			switch (c){
				case 'A':{
					qr=qr+qr*q;
					pr=pr+3.50*q;
					tov=tov+pr;
					break;
				}
				case 'a':{
					qr=qr+qr*q;
					pr=pr+3.50*q;
					tov=tov+pr;
					break;
				}
				case 'B':{
					qcs=qcs+qcs*q;
					pcs=pcs+4.00*q;
					tov=tov+pcs;
					break;
				}
				case 'b':{
					qcs=qcs+qcs*q;
					pcs=pcs+4.00*q;
					tov=tov+pcs;
					break;
				}
				case 'C':{
					qcd=qcd+qcd*q;
					pcd=pcd+5.50*q;
					tov=tov+pcd;
					break;
				}
				case 'c':{
					qcd=qcd+qcd*q;
					pcd=pcd+5.50*q;
					tov=tov+pcd;
					break;
				}
				case 'D':{
					qs=qs+qs*q;
					ps=ps+7.50*q;
					tov=tov+ps;
					break;
				}
				case 'd':{
					qs=qs+qs*q;
					ps=ps+7.50*q;
					tov=tov+ps;
					break;
				}
				case 'E':{
					qb=qb+qb*q;
					pb=pb+9.00*q;
					tov=tov+pb;
					break;
				}
				case 'e':{
					qb=qb+qb*q;
					pb=pb+9.00*q;
					tov=tov+pb;
					break;
				}
				case 'F':{
					Relatorio (qr, qcs, qcd, qs, qb, pr, pcs, pcd, ps, pb, tov);
					system("pause");
					break;
				}
				case 'f':{
					Relatorio (qr, qcs, qcd, qs, qb, pr, pcs, pcd, ps, pb, tov);
					system("pause");
					break;
				}
				default:{
					printf("Código inválido\n");
					break;
				}
			}
		printf("Quer continuar o pedido? (S/N)\n\n");
		scanf(" %c", &r);
		}while(r=='S'||r=='s');
		t=pr+pcs+pcd+ps+pb;
		printf("O total a ser pago é de:%.2f\n\n", t);
	}while(c!='f'||c!='F');
}
void Relatorio (int a, int b,int c,int d,int e,float pa, float pb,float pc,float pd,float pe,float pt){
	printf("\nO total de cada produto vendido:\nRefrigerante:%d \nCasquinha Simples:%d \nCasquinha Dupla:%d \nSundae:%d \nBanana Split:%d\n",a,b,c,d,e);
	printf("\nO total pago de cada produto vendido:\nRefrigerante:%.2f \nCasquinha Simples:%.2f \nCasquinha Dupla:%.2f \nSundae:%.2f \nBanana Split:%.2f\n",pa,pb,pc,pd,pe);
	printf("\nTotal vendido no dia:%.2f\n",pt);
}
