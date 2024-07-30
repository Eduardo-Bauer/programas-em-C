/*Faça um programa que leia uma matriz M[5][5] e gere dois vetores SomaLin[5] e SomaCol[5], 
com a soma dos elementos de cada linha e a soma dos elementos de cada coluna da matriz M. 
Escreva ao final os vetores Somalin e Somacol.*/

#include <stdio.h>
#include <stdlib.h>
#define n 5
int main(){
	int mat[n][n], somalin[n] = {0, 0, 0, 0, 0}, somacol[n] = {0, 0, 0, 0, 0}, i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			mat[i][j] = rand()%100;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("% 4d", mat[i][j]);
			somalin[i] += mat[i][j];
			somacol[j] += mat[i][j];
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		printf("Soma da coluna %d: %d", i+1, somacol[i]);
		printf("\n");
	}
	for(i=0;i<n;i++){
		printf("Soma da linha %d: %d", i+1, somalin[i]);
		printf("\n");
	}
}
