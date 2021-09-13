#include<stdio.h>
#include<locale.h>

main(){
	float lado, area;
	setlocale(LC_ALL, "portuguese");
	
	printf("Insira o valor do lado: ");
		scanf("%f", &lado);
		
	area = lado * lado;
	
	printf("\n¿rea: %.2f", area);
}
