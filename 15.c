#include<stdio.h>
#include<string.h>

//A OBI (Organiza��o de Bocha Internacional) � respons�vel por organizar a competi��o mundial de bocha. 
//Infelizmente esse esporte n�o � muito popular, e numa tentativa de aumentar a sua popularidade, ficou 
//decidido que seriam chamados, para a Grande Final Mundial, o campe�o e o vice-campe�o de cada sede nacional, 
//ao inv�s de apenas o primeiro lugar. Tumb�lia � um pa�s pequeno que j� havia realizado a sua competi��o 
//nacional quando a nova regra foi institu�da, e o comit� local n�o armazenou quem foi o segundo classificado. 
//Felizmente eles armazenaram a pontua��o de todos competidores - que foram apenas tr�s, devido ao tamanho diminuto do pa�s. 
//Sabe-se tamb�m que as pontua��es de todos jogadores foram diferentes, de forma que n�o ocorreu empate entre nenhum deles. 
//Resta agora descobrir quem foi o vice-campe�o e para isso o comit� precisa de ajuda. 

int main()
{
	int i, com1, com2, com3;
	
	printf("Digite o numero de pontos: ");
	scanf("\n%d %d %d",&com1,&com2,&com3);
	
	if(com1 > com2 && com1 < com3 || com1 < com2 && com1 > com3)
	printf("\n%d",com1);
	
	else if(com2 > com1 && com2 < com3 || com2 < com1 && com2 > com3)
	printf("\n%d",com2);
	
	else if(com3 > com1 && com3 < com2 || com3 < com1 && com3 > com2)
	printf("\n%d",com3);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}
