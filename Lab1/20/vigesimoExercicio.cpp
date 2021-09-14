#include<stdio.h>
#include<locale.h>

main(){
	int anos = 0;
	float alturaChico = 1.50, alturaJuca = 1.10;
	
	setlocale(LC_ALL, "portuguese");
	
	while(alturaChico > alturaJuca){
		alturaChico += 0.02;
		alturaJuca += 0.03;
		anos++;
	}
	
	printf("Serão necessários %d anos para que Juca seja maior que Chico.", anos);
}
