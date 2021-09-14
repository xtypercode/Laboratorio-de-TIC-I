#include<stdio.h>

main(){
	int num, resultado = 1;
	
	printf("Insira o valor: ");
		scanf("%d", &num);
		
	printf("\n");
	for(int i = num; i >= 1; i--){
		if(i != 1){
			printf("%d x ", i);
		}else{
			printf("%d = ", i);
		}
		
		resultado *= i;
	}
	
	printf("%d", resultado);
}
