#include<stdio.h>

//Fa�a um programa em C para efetuar a convers�o de um valor dado em Mbps para Kbps. 

int main()
{
	float mbPs, resul;
	
	printf("valor dado em Mbps: ");
	scanf("%f",&mbPs);
	
	resul = mbPs * 1000;
	
	printf("\nA convers�o do valor dado em Mbps para Kbps e: %.2f",resul);
	
	system("PAUSE");
	return 0;	
}
