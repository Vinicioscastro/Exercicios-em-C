// inclusão das bibliotecas
#include <stdlib.h> 
#include <stdio.h>

//inicio do Main, função principal do programa
int main(){
	
	Inicio: // comando responsavel por iniciar pro programa quando o usuario digitar 1
	
	float nota1, nota2, nota3, media; // criar as variaveis que serão usadas no programa
	
	printf("#------Sistema-----# \n");
	printf("#---------de-------# \n");     // Mostrar na tela 
	printf("#------ Notas -----# \n \n");
	
		printf("#------ Notas -----# \n \n");
	
	printf("Digite a primeira nota: "); // Mostrar na tela o pedido da nota 1
	scanf("%f", &nota1);				// pegar nota 1 e guardar na variavel nota1
	
	printf("Digite a segunda nota: ");  // Mostrar na tela o pedido da nota 2
	scanf("%f", &nota2);				// pegar nota 2 e guardar na variavel nota2
	
	printf("Digite a terceira nota: "); // Mostrar na tela o pedido da nota 3
	scanf("%f", &nota3);				// pegar nota 3 e guardar na variavel nota3
	
	media = (nota1 + nota2 + nota3) / 3; // Somar as 3 notas, dividir por 3, e armazenar o resultado na variavel média.
	
	printf("\n\n#------ Notas -----# \n \n"); // mostrar na tela
	
	printf("\nnota 1: %f \n", nota1); // mostrar na tela a nota 1
	printf("nota 2: %f \n", nota2);   // mostrar na tela a nota 2
	printf("nota 3: %f \n", nota3);   // mostrar na tela a nota 3
	
	printf("\n\n#------ Media -----# \n \n"); // mostrar na tela
	printf("Media : %f \n", media);	 		  // Exibir na media do aluno na tela
	
	if (media < 7 ){      // Vai comparar a nota do aluno, se for menor que 7 vai exibir a msg abaixo.
		printf("\n\n#------ Aluno REPROVADO -----# \n \n");
	} else{ 			// se a condição anterior (media menor que 7) nao for verdadeira, vai exibir a msg abaixo, que o aluno foi aprovado por ter nota maior ou igual a 7
		printf("\n\n#------ Aluno APROVADO -----# \n \n");
	}
	
	int escolha; // Criando variavel escolha
	
	printf("\n\n#------ DIGITE 1 para calcular outro aluno  -----# \n \n"); // pedir pro usuario digitar 1 se ele quiser fazer outro teste
	scanf("%d", &escolha); // guardar escolha na variavel escolha
	
	if (escolha == 1){ // vai comparar se a escolha e igual ao numero 1, se for vai executar os 2 comando abaixo.
		system("cls");  // Limpar a tela, apagando os dados inseridos;
		goto Inicio; // Vai levar a execução pro incio novamente, de onde tem o comando Inicio;
	}
	
	
	
	return 0;
}
// Fim do Programa.
