#include<stdio.h>
#include<locale.h>

main(){
	float salarioActual, perAum;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o salário actual do funcionário: ");
		scanf("%f", &salarioActual);
		
	printf("Insira o percentual de aumento para o funcionário: ");
		scanf("%f", &perAum);
		
	float novoSalario = salarioActual + ((salarioActual * perAum) / 100);	
	
	printf("\nEis o novo salário do funcionário: %.3f", novoSalario);		
}
