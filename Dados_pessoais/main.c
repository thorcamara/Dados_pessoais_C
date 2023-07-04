#include <stdio.h>
#include <stdlib.h>

struct t_pessoa{
	char nome[200];
	int idade;
	float peso;
	float altura;
};

int main(int argc, char *argv[]) {
	
	struct t_pessoa lista[3];
	int i;
	
	for(i=0; i<3; i++){
		printf("Insira o NOME da pessoa da posicao %d:\n", i+1);
		scanf("%199[^\n]s", &lista[i].nome);
		fflush(stdin);
		printf("Insira a IDADE da pessoa da posicao %d.\n", i+1);
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		printf("Insira o PESO da pessoa da posicao %d.\n", i+1);
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		printf("Insira a ALTURA da pessoa da posicao %d.\n", i+1);
		scanf("%f", &lista[i].altura);
		fflush(stdin);
	}
	
	for(i=0; i<3; i++){
		printf("\n----------------- Pessoa %d -----------------\n", i+1);
		printf("Nome: %s.\n", lista[i].nome);
		printf("Idade: %d.\n", lista[i].idade);
		printf("Peso: %.2f.\n", lista[i].peso);
		printf("Altura: %.2f.\n", lista[i].altura);
		printf("--------------------------------------------\n\n");
	}
	
	
//	printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
//	printf("Idade da primeira pessoa: %d.\n", lista[0].idade);
//	printf("Peso da ultiam pessoa: %.2f.\n", lista[2].peso);
//	printf("Altura da ultima pessoa: %.2f.\n", lista[2].altura);
	
	return 0;
}
