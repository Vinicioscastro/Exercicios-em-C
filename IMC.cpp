#include<stdlib.h>
#include<stdio.h>



int main(){
	
	float peso;
	float altura; 

	float imc;
	float teste;
	
	printf("---- CALCULAR IMC ------ \n");
	
	printf("---- digite sua altura em metros ------ \n Altura: ");
	scanf("%f",&altura);
	
	printf("---- digite seu peso em KG ------ \n Peso: ");
	scanf("%f",&peso);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5){
		printf(" \n Seu Imc e de: %f e voce esta na classe: Peso Baixo", imc);
	}
	
	if (imc >= 18.5 && imc <25){
		printf(" \n Seu Imc e de: %f e voce esta na classe: Peso normal", imc);
	}
	if (imc >= 25 && imc <30){
		printf(" \n Seu Imc e de: %f e voce esta na classe: Sobrepeso", imc);
	}
	
		if (imc >= 30 && imc <35){
		printf(" \n Seu Imc e de: %f e voce esta na classe: obsidade grau I", imc);
	}
		if (imc >= 35 && imc <40){
		printf(" \n Seu Imc e de: %f e voce esta na classe: obsidade severa grau II", imc);
	}	
	
		if (imc > 40){
		printf(" \n Seu Imc e de: %f.2f e voce esta na classe: obsidade morbiba grau III", imc);
	}
	
	printf("\n---- FINAL ------ \n");	
	
}
