#include <stdio.h>
#include <stdlib.h>

void lemedias(char *arquivo){
	int i, j, total, veses;
	float media, valor;
	FILE *entrada = fopen(arquivo, "r");
	if(entrada == NULL){
		printf("ERRO\n");
		exit(0);
	}
	FILE *saida = fopen("saida.txt", "w");
	if(saida == NULL){
		printf("ERRO\n");
		exit(0);
	}
	fscanf(entrada, "%d\n", &total);
	for(i=0;i<total;i++){
		media = 0;
		fscanf(entrada, "%d\n", &veses);
		for(j=0;j<veses;j++){
			fscanf(entrada, "%f", &valor);
			media += valor;
		}
		fscanf(entrada, "\n");
		media /= veses;
		fprintf(saida, "%.1f\n", media);
	}
	fclose(entrada);
}

int main(){
	char arquivo[50] = "exer01.txt";
	lemedias(arquivo);
}
