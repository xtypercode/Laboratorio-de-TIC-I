#include<stdio.h>
#include<math.h>

main(){
	int i = 1, vet[100], j = 0, num = 929, x;
	
	do{
		x = num % math.Pow(10, i) / math.Pow(10, (i - 1));
		
		while(x >= 0 && x <= 9){
			vet[j] = x;
			j++;
		};
		
		i++;
	}while(x >= 0);
	
	for(int i = 0; i < j; i++){
		printf("%d", vet[i]);
	}
	
}
