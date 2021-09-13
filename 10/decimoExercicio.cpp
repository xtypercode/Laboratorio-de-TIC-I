#include<stdio.h>
#include<locale.h>

main(){
	float quantQuiloWatts, salarioMin;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o salário mínimo: ");
		scanf("%f", &salarioMin);
	printf("Insira a quantidade de quilowatts: ");
		scanf("%f", &quantQuiloWatts);
			
	float valorQuiloWatt = (salarioMin / 5);
	float valorPago = valorQuiloWatt * quantQuiloWatts;
	float valorPagoDes = valorPago - (valorPago * 0.15);
	
	printf("\nValor de cada quilowatt: %.3f", valorQuiloWatt);
	printf("\nValor a ser pago pela residência: %.3f", valorPago);
	printf("\nValor a ser pago com desconto de 15%%: %.3f", valorPagoDes);
}
