#include<stdio.h>

//A s�rie de Fibonacci � formada pela sequ�ncia:    
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...   Escreva um programa  
//que  gere  a  s�rie  de  FIBONACCI  at�  o N-�simo termo informado 
//pelo usu�rio. 

int main(){

	int a=0, b=1, aux, i, n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("S�rie de Fibonacci:\n");
	printf("%d\n", b);
	
	for(i = 0; i < n; i++){
    	aux = a + b;
    	a = b;
    	b = aux;
    	printf("%d\n", aux);
	}
	
	system("PAUSE");
	return 0;
}
