//Faça um programa que leia uma matriz M[5][5] e troque cada elemento da linha 3 com elemento correspondente da linha 1. Escreva a matriz

#include<stdio.h>
#include<stdlib.h>
#define n 5
int main(){
	int i, j, aux;
	int mat[n][n];
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat[i][j]=rand()%10;
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("% d", mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0, j=0; j<n; j++){
		aux = mat[i][j];
		mat[i][j] = mat[i+2][j];
		mat[i+2][j] = aux;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("% d", mat[i][j]);
		}
		printf("\n");
	}
}
