#include <stdio.h>
#include <conio.h>
/*
C�lculo de M�dia: Criar um algoritmo que calcula a m�dia de um conjunto de n�meros inseridos pelo usu�rio.
*/

int CalcMedia(){
	int cont=0;
	float i, nota, media;
	
	do{
		printf("\nDigite a nota (99 - Para sair): ");
		scanf("%f",&i);
		nota = nota + i;

		cont++;
	}while(i!=99);
	
	media = (nota - i)/(cont-1);
	return media;
}

void main(){
	float retorno;
	retorno = CalcMedia();
	printf("A media eh: %.2f", retorno);
}
