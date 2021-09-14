#include<stdio.h>
#include<locale.h>

main(){
	float salarioActual;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o salário actual do funcionário: ");
		scanf("%f", &salarioActual);
		
	float novoSalario = salarioActual + (salarioActual * 0.25);
	
	printf("\nNovo salário do funcionário: %.3f", novoSalario);
}
