#include<stdio.h>
#include<locale.h>

main(){
	float salarioMin, salarioFunc;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o salário mínimo: ");
		scanf("%f", &salarioMin);
		
	printf("Insira o salário do funcionário: ");
		scanf("%f", &salarioFunc);
		
	printf("\nQuantidade de salários mínimos que o funcionário recebe: %.3f", (salarioFunc / salarioMin));
}
