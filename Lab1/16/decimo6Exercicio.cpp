#include<stdio.h>

main(){
	float altura = 0.0, maior = 0.0, menor = 0.0;
	
	for(int i = 1; i <= 4; i++){
		printf("Insira a altura: ");
			scanf("%f", &altura);
		
		if(i == 1){
			maior = altura;
			menor = altura;
		}
		
		if(altura > maior){
			maior = altura;
		}
			
		if(altura < menor){
			menor = altura;		
		}
	}
	
	printf("\nMenor altura do grupo: %.2f", menor);
	printf("\nMaior altura do grupo: %.2f", maior);
}
