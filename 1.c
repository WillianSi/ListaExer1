#include<stdio.h>

//Elaborar um programa em C que apresente o valor da convers�o 
//em d�lar (US$) de um valor lido em real, o programa deve 
//solicitar a cota��o do d�lar e tamb�m a quantidade de reais 
//dispon�vel com o usu�rio.
int main()
{
	float re, dol, resul;
	printf("cotacao do dolar: ");
	scanf("%f",&dol);
	
	printf("\nDigiteo valor em real a ser comvertido: ");
	scanf("%f",&re);
	
	resul = re * dol;
	
	printf("\nO seu valor em reais e: %.2f",resul);
	
	system("PAUSE");
	return 0;		
}
