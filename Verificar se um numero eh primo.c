#include <stdio.h>
#include <conio.h>
/*Verifica��o de N�meros Primos: Desenvolver um algoritmo que verifica se um n�mero inserido pelo usu�rio � primo ou n�o.*/

int PrimoEh(){
	int n, cont1, ehPrimo=1;
	
	printf("\n Digite o numero que quer verificar: ");
	scanf("%d",&n);
	
	for(cont1=2;cont1<=n/2;cont1++){
		if(n%cont1==0){
			ehPrimo=0;
		}
	}
	
	return ehPrimo;
}
void main(){
	int retorno;
	retorno = PrimoEh();
	if(retorno == 1){
		printf("\n O numero eh primo!");
	}else{
		printf("\n O numero nao eh primo!");
	}	
}
