//Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos em toda a região acima da diagonal principal.

#include<stdio.h>
#include<stdlib.h>
#define n 5
int main(){
	int i, j, soma;
	int mat[n][n];
	soma = 0;
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
	for(i=0,j=1;j<n;j++){
		soma += mat[i][j];
		if(j==4){
			i++;
			j=i;
		}
	}
	printf("soma: %d", soma);
}
