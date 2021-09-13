#include<stdio.h>

main(){
	int num;
	
	do{
		printf("Digite um valor: ");
			scanf("%d", &num);
			
		if(num >= 0){
			printf("SUCESSOR (%d): %d\n", num, (num + 1));
		}else{
			break;
		}
	}while(num >= 0);
}
