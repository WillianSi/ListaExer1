#include<stdio.h>

//Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um,
//a idade de um indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m 
//o valor de idade negativa. Calcular e imprimir a idade m�dia deste grupo de indiv�duos.

int main()
{
	int idade, cont=0;
	float media=0, soma;
	do{	
		printf("Digite uma idade: ");
		scanf("%d",&idade);
		
		soma += idade;
		cont += 1; 
		
	}while(idade > 0);
	
	 soma -= idade;
	 cont -= 1;
	 media = soma / cont;
	 
	printf("A m�dia de valores pares: %.0f\n",soma);
	printf("A m�dia de valores pares: %d\n",cont);
	printf("A m�dia de valores pares: %.2f\n",media); 

	system("PAUSE");
	return 0;
}
	

