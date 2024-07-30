//M00001800) Faça um programa que leia uma matriz M[5][6] e divide todos os 6 elementos de cada linha pelo valor do menor elemento EM MÓDULO da linha. Escrever a matriz modificada.
#include<stdio.h>
#include<stdlib.h>

void le_matriz(float mat[5][6]){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("digite o valor na matriz %d, %d:\n", i+1, j+1);
			scanf("%f", &mat[i][j]);
		}
	}
}

void escreve_matriz(float mat[5][6]){
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%.2f ", mat[i][j]);
		}
		printf("\n");
	}
}

void divide_valores(float mat[5][6]){
	int i, j, menor;
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			if(j==0){
				menor = mat[i][j];
			}else{
				if(menor > mat[i][j]){
					menor = mat[i][j];
				}
			}
		}
		for(j=0;j<6;j++){
			mat[i][j] = mat[i][j] / menor;
		}
	}
}

int main(){
	float mat[5][6];
	le_matriz(mat);
	escreve_matriz(mat);
	printf("---------dividido---------\n");
	divide_valores(mat);
	escreve_matriz(mat);
}
