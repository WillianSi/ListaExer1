#include<stdio.h>
#include<math.h>

//Fa�a um programa que leia um n�mero e, caso ele seja positivo, calcule e mostre: 
//O n�mero digitado ao quadrado � A raiz quadrada do n�mero digitado 

int main()
{
	float num, dol, resul;
	
	printf("Digite um valor: ");
	scanf("%f",&num);
	
	if(num > 0){
		printf("\nO seu valor ao quadrado e: %.2f",pow(num,2));	
		printf("\nA raiz quadrada do seu valor e: %.2f",sqrt(num));
	}
	
	system("PAUSE");
	return 0;	
}
