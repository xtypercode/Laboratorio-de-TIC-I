#include<stdio.h>

main(){
	int anoNasc, anoAct;
	
	printf("Insira seu ano de nascimento: ");
		scanf("%d", &anoNasc);
		
	printf("Insira o ano actual: ");
		scanf("%d", &anoAct);
		
	int idadeAct = anoAct - anoNasc;
	int idade2050 =  2050 - anoNasc;
	
	printf("\nIdade actual da pessoa: %d", idadeAct);
	printf("\nIdade da pessoa em 2050: %d", idade2050);
}
