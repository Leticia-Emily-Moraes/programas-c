#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int cont=1;
	while(cont<=100){
		printf(" %d - Estava com saudade de TPA \3\3\3\3\3\3\3 ps: já estava com depressão\n", cont);
		cont++;
	}
}
