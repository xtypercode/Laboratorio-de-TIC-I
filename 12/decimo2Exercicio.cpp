#include<stdio.h>
#include<math.h>

main(){
	int num;
	
	printf("Insira um número: ");
		scanf("%i", &num);
		
	int i = 1, vet[100], j = 0, x = 0;
	
	do{
		x = ((double)num % (pow(10, i))) / pow(10, (i - 1));		
		while(x >= 0 && x <= 9){
			vet[j] = x;
			j++;
		}
		
		i++;
	}while(x >= 0);
	
	for(int i = 0; i < j; i++){
		printf("%d", vet[i]);
	}
		
	
}
