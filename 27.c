#include<stdio.h>
#include<stdlib.h>

//Gere um n�mero aleat�rio entre 0 e 19. Receba um n�mero informado pelo usu�rio 
//at� que ele acerte o n�mero aleat�rio gerado. Apresente quantas tentativas 
//foram necess�rias. Para gerar um n�mero aleat�rio.

int main()
{
	int aleatorio, numero, cont=0; 
	do{		
		srand(time(NULL));
		aleatorio = rand()%20;
		scanf("%d",&numero); 
		cont++; 
	}while(numero!=aleatorio);
	 
	printf("Aleatorio:%d | Seu numero:%d\n", aleatorio, numero); 
	printf("Foram necessarias %d tentativas\n", cont); 

	system("PAUSE");
	return 0;
}
	

