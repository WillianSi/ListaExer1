#include<stdio.h>

//Crie um programa em C que  leia a  idade de uma pessoa e  
//informe a sua classe eleitoral:  
//-  n�o eleitor (abaixo de 16 anos);  
//-  eleitor obrigat�rio (entre a faixa de 18 e menor de 65 anos);  
//-  eleitor facultativo (de 16 at� 18 anos e maior de 65 anos, inclusive). 
int main()
{
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade < 16){
		printf("\nNao e eleitor");
	}
	else if(idade > 18 && idade <65){
		printf("\nEleitor obrigatorio");
	}
	else if(idade >= 16 && idade < 18 || idade > 65){
		printf("\nEleitor facultativo");
	}
	printf("\n");
	
	system("PAUSE");
	return 0;
}
