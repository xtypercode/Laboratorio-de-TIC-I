#include<stdio.h>
#include<locale.h>

main(){
	float horasTrab, salarioMin, salarioBruto;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o número de horas trabalhadas: ");
		scanf("%f", &horasTrab);
	printf("Digite o salário mínimo: ");
		scanf("%f", &salarioMin);
	
	salarioBruto = horasTrab * (salarioMin / 2);
	
	float salarioReceb = salarioBruto - (salarioBruto * 0.03);
	
	printf("\nSalário a receber: %.3f", salarioReceb);
}
