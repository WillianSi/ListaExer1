#include<stdio.h>
#include<string.h>

//Construa um programa em C para calcular a m�dia de valores PARES e �MPARES, 
//que ser�o digitados pelo usu�rio. Ao final o programa deve mostrar estas duas
// m�dias. Pergunte ao usu�rio se ele deseja continuar a cada itera��o.
 
int main()
{
	int numero, nome, cont1=0 ,cont2=0 , re1=0,re2=0,respostas1,respostas2;
	
	
	do{	
		printf("numero: ");
		scanf("%d",&numero);
		
		printf("Deseja comtinuar: ");
		scanf("%d",&nome);
			
		if(numero%2 > 0){
			re1 += numero;
			cont1++;
			respostas1= re1/cont1;	
		}
		else if(numero%2 == 0){
			re2 += numero;
			cont2++;
			respostas2= re2/cont2;	
		}
	}while(nome!= 1);
	 
	printf("A m�dia de valores pares: %d\n",respostas1);
	printf("A m�dia de valores impares: %d\n",respostas2); 

	system("PAUSE");
	return 0;
}
	

