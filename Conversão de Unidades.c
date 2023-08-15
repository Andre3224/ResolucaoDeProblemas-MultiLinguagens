#include <stdio.h>
#include <conio.h>
/*Criar um programa que converte valores entre diferentes unidades de medida, 
como Celsius para Fahrenheit ou metros para pés.*/

void Celsius_F(){
	float fah, cels;
	printf("Digite a Temperatura (Celsius): ");
	scanf("%f",&cels);
	
	fah = (cels*1.8)+32;
	
	printf("A temperatura %.1f F convertido eh %.1f C", cels, fah);
}
void Fah_C(){
	float fah, cels;
	printf("Digite a Temperatura (Fahrenheit): ");
	scanf("%f",&fah);
	
	cels = (fah - 32)/1.8;
	printf("A temperatura %.1f F convertido eh %.1f C", fah, cels);
}

void Met_Pes(){
	float metros, pes;
	printf("Digite o valor em metros que deseja converter: ");
	scanf("%f",&metros);
	
	pes = metros*3.28;
	printf("O valor %.2f m convertido em pes eh: %.2f", metros, pes);
}
void Cem_Pol(){
	float valor, pol;
	printf("Digite o valor em cm: ");
	scanf("%f",&valor);
	
	pol = valor*0.39;
	printf("%.2f centimetro convertido para pol eh: %.2f", valor, pol);
}

void Pol_Cem(){
	float valor, pol;
	printf("Digite o valor em pol: ");
	scanf("%f",&valor);
	
	pol = (float)valor/0.39;
	printf("%.2f polegadas convertido para cm eh: %.2f", valor, pol);
}
void Pes_Met(){
	float metros, pes;
	printf("Digite o valor em pes que deseja converter: ");
	scanf("%f",&pes);
	
	metros = pes/3.28;
	printf("O valor %.2f pes convertido em metros eh: %.2f", pes, metros);
}
void main(){
	int op;
	do{
		printf("\n 1- Celsius para Fahrenheit \n 2- Metros para Pes \n 3- Cm para polegadas");
		printf("\n 4- Fahrenheit para Celsius \n 5- Pes para Metros \n 6- Polegadas para Cm");
		printf("\nEscolha a opcao que deseja: ");
		scanf("%d",&op);
		
		switch(op){
			case 1:
				Celsius_F();
				break;
			case 2:
				Met_Pes();
				break;
			case 3:
				Cem_Pol();
				break;
			case 4:
				Fah_C();
				break;
			case 5:
				Pes_Met();
				break;
			case 6:
				Pol_Cem();
				break;
			default:
				break;
		}
	}while(op != 0);
}
