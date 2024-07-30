/*Faça um programa que leia uma matriz M[5][5] e escreva o número da linha que contenha a maior soma de seus elementos. 
Considere que a matriz só contem valores positivos.*/

#include<stdio.h>
#include<stdlib.h>
#define n 5
int main(){
	int mat[n][n];
	int i, j, soma, total, linha;
	total = -1;
	linha = -1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat[i][j] = rand()%100;
		}
	}
	for(i=0;i<n;i++){
		soma = 0;
		for(j=0;j<n;j++){
			printf("% 3d", mat[i][j]);
			soma += mat[i][j];
		}
		if(soma > total){
			total = soma;
			linha = i;
		}
		printf("\n");
	}
	printf("A linha com a maior soma e: %d", linha+1);
}
