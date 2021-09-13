#include<stdio.h>

main(){
	int fib1 = 0, fib2 = 1, fib = 0;
	
	printf("0 1 ");
	for(int i = 1; i < 20; i++){
		fib = fib1 + fib2;

		printf("%d ", fib);
		fib1 = fib2;
		fib2 = fib;
	}
}
