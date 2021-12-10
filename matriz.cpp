#include <stdlib.h>
#include <stdio.h>

int main(){
	
	inicio:
	
	int matriz[5][5] = {{150,0,100,150,200}, {200,300,230,100,90}, {250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}};
	int linha, coluna, quantidade, maior=0;
	

	
	for(int i = 0; i<5; i++){
		for (int j = 0; j<5; j++){
			printf("%d -", matriz[i][j]);
			
		}
		printf("\n");
	}
	
	printf("Digite a Linha: ");
	scanf("%d", &linha);
	
	if( linha == -1 ){
		for(int i = 0; i<5; i++){
			for (int j = 0; j<5; j++){
				if (maior < matriz[i][j]){
					maior = matriz[i][j];
				}
				
			}
		}
		printf("Produto com maior quantidade tem estoque tem %d itens", maior);
		exit(0);
	}
	
	printf("Digite a Coluna: ");
	scanf("%d", &coluna);
	
	printf("Digite a quantidade: ");
	scanf("%d", &quantidade);
	
	
	if(matriz[linha -1][coluna -1] > quantidade){
		printf("Operacao Concluida \n");
		printf("Restam -> %d \n", matriz[linha -1][coluna -1] - quantidade);
		matriz[linha -1][coluna -1] = matriz[linha -1][coluna -1] - quantidade;
	}else printf("erro");
	
	
	
	
	goto inicio;
	printf("Produto com maior quantidade tem estoque tem %d itens", maior);
	
return 0;
}
