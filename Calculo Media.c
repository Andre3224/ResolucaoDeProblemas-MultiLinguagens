#include <stdio.h>
#include <conio.h>
/*
Cálculo de Média: Criar um algoritmo que calcula a média de um conjunto de números inseridos pelo usuário.
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
