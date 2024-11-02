#include <stdio.h>
#include <stdlib.h>

struct usuario{
	int codigo;
	char nome[50];
	char telefone[30];
};
typedef struct usuario USUARIO;

void le_arquivo(char *arquivo){
	USUARIO aux;
	int vetor[100] = {0}, n, i;
	FILE *entrada = fopen(arquivo, "rb");
	if(entrada == NULL){
		printf("ERRO\n");
		exit(0);
	}
	while(fread(&aux, sizeof(USUARIO), 1, entrada)){
		n = aux.telefone[1] - '0';
		n = n*10;
		n = n + aux.telefone[2] - '0';
		vetor[n]++;
	}
	fclose(entrada);
	FILE *saida = fopen("saida.txt", "w");
	if(saida == NULL){
		printf("ERRO\n");
		exit(0);
	}
	for(i=0;i<100;i++){
		if(vetor[i]>0){
			fprintf(saida, "%d %d\n", i, vetor[i]);
		}
	}
}

int main(){
	char arquivo[50] = {"usuarios.bin"};
	le_arquivo(arquivo);
}
