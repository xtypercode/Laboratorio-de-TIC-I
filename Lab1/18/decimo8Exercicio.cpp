#include<stdio.h>
#include<locale.h>

main(){
	char nomeCliente[3][60];
	int diaria[30], quartosHotel = 3;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 0; i < quartosHotel; i++){
		printf("Insira o nome do cliente para que seja registado: ");
			scanf("%s", &nomeCliente[i]);
		
		printf("Insira a diária do cliente: ");
			scanf("%d", &diaria[i]);
	}
	
	float contaCliente, ganhoHotel = 0.0;
	printf("\n");
	for(int i = 0; i < quartosHotel; i++){
		contaCliente = 0.0;
		
		if(diaria[i] < 15){
			contaCliente = (diaria[i] * 50.00) + (diaria[i] * 4.00);
		}else if(diaria[i] == 15){
			contaCliente = (diaria[i] * 50.00) + (diaria[i] * 3.60);
		}else{
			contaCliente = (diaria[i] * 50.00) + (diaria[i] * 3.00);
		}
		
		printf("O cliente %s tem uma conta de %.2f USD\n", nomeCliente[i], contaCliente);
		ganhoHotel += contaCliente;
	}
	
	printf("Total ganho do Hotel: %.2f USD", ganhoHotel);
	
}
