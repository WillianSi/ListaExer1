#include<stdio.h>

//Fa�a um programa que receba dois n�meros e mostre qual deles � o maior.  
int main()
{
	float n, r;
	printf("Digite um numero: ");
	scanf("%f",&n);
	
	printf("Digite outro numero: ");
	scanf("%f",&r);
	
	if(n > r){
		printf("O numero %.2f e maior numero\n",n);	
		
	}else{
		printf("O numero %.2f e maior numero\n",r);
	}
	
	system("PAUSE");
	return 0;
}
