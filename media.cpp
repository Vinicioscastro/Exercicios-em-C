#include <stdlib.h>
#include <stdio.h>

int main(){
	
	Inicio:
	
	float nota1, nota2, nota3, media;
	
	printf("#------Sistema-----# \n");
	printf("#---------de-------# \n");
	printf("#------ Notas -----# \n \n");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	
	printf("\n\n#------ Notas -----# \n \n");
	
	printf("\nnota 1: %f \n", nota1);
	printf("nota 2: %f \n", nota2);
	printf("nota 3: %f \n", nota3);
	
	printf("\n\n#------ Media -----# \n \n");
	printf("Media : %f \n", media);	
	
	if (media < 7 ){
		printf("\n\n#------ Aluno REPROVADO -----# \n \n");
	} else{
		printf("\n\n#------ Aluno APROVADO -----# \n \n");
	}
	
	int escolha;
	
	printf("\n\n#------ DIGITE 1 para calcular outro aluno  -----# \n \n");
	scanf("%d", &escolha);
	
	if (escolha == 1){
		system("cls");
		goto Inicio;
	}
	
	
	
	return 0;
}
