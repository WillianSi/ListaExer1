#include<stdio.h>
#include<math.h>

// Construa um programa em C para determinar se o indiv�duo est� com um peso favor�vel. 
// Essa situa��o � determinada atrav�s do IMC (�ndice de Massa Corp�rea), que � definida 
// como sendo a rela��o entre o peso (PESO) e o quadrado da Altura (ALTURA) do indiv�duo.
 
int main(){
	
        float peso,al,imc;

        printf("Peso: ");
        scanf("%f",&peso);
        printf("Altura: ");
        scanf("%f",&al);

        imc=pow(al,2)/peso;
		
        if (imc<20){
            printf("Abaixo do peso");
        }            
        else if (imc>=20 && imc<25){
            printf("Peso normal");
        }
        else if (imc>=25 && imc<30){
            printf("Sobre Peso");
        }
        else if (imc>30 && imc<=40){
            printf("Obeso");
        }
        else if (imc>40){
            printf("Obeso M�rbido");
        }
    
    printf("\n");
	
	system("PAUSE");
	return 0;
}             
