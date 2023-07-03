#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	const int numi=40, numl=0;
	int cont, conti;
	char senha[10]={'E','T','S','E','P',' ','O','D','U','T'};
	
	for(cont=0;cont<=numi;cont++){
		
		for(conti=10;conti>=numl;conti--){
		printf(" %c",senha[conti]);
	}
	printf("\n\3\3\3\3");
	}
	
}
