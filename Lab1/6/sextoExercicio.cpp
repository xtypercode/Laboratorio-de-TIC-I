#include<stdio.h>
#include<locale.h>

main(){
	float custoEspect, precoConvit;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite o custo do espetáculo teatral: ");
		scanf("%f", &custoEspect);
		
	printf("Digite o preço do convite para o espectáculo: ");
		scanf("%f", &precoConvit);
		
	int quantConvit = custoEspect / precoConvit;
	
	printf("\nQuantidade de convites a serem vendidos: %d", quantConvit);
}
