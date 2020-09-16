#include<stdio.h>

//Efetuar o c�lculo da quantidade de litros de combust�vel 
//gastos em uma viagem, utilizando-se um autom�vel que faz 
//N Km por litro. Para obter o c�lculo, o usu�rio dever� 
//fornecer o tempo gasto e a velocidade m�dia da viagem. 
//Desta forma, ser� poss�vel obter a dist�ncia percorrida 
//com a f�rmula DISTANCIA ? TEMPO * VELOCIDADE. Tendo o 
//valor da distancia, basta calcular a quantidade de litros 
//de combust�vel utilizada na viagem com a f�rmula: 
//LITROS_USADOS DISTANCIA /N. 
//O programa em C dever� apresentar os valores da dist�ncia 
//percorrida e a quantidade de litros utilizados na viagem. 

int main()
{
	float n, distancia, tempo, velocidade, litros_usados;
	
	printf("Km por litro: ");
	scanf("%f",&n);
	
	printf("\nTempo de viagem: ");
	scanf("%f",&tempo);
	
	printf("\nVelocidade: ");
	scanf("%f",&velocidade);
	
	distancia=tempo*velocidade;
	litros_usados=velocidade/n;
	
	printf("\nDistancia percorida: %.2f Km",distancia);
	printf("\nQantidade de litros usados: %.2f L",litros_usados);
	
	system("PAUSE");
	return 0;
}
