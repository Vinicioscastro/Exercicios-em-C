#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int lista [] = {1950, 1999, 2005, 2017, 1900, 2016, 2020, 1500, 1689, 2021};
	
	for(int i=0; i<= 10; i++){
		for(int j =0; j<=10; j++){
			if(lista[i]<lista[j]){
				int aux = lista[i];
				lista[i] = lista[j];
				lista[j] = aux;
			}
		}
	}
	
	///// mostrar
	for(int i=0; i<= 10; i++){
		printf("%d \n",lista[i]);
	}
	
	return 0;
}
