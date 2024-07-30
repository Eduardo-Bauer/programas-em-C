/*Faça um programa que leia uma matriz M[5][5], possivelmente com elementos repetidos. Leia, a seguir, 5 valores e, para cada um, verifique se o valor ocorre ou não na matriz, 
escrevendo a posição (linha e coluna) em que foi encontrada a primeira ocorrência do mesmo e, caso ele não exista na matriz, a mensagem "Não tem".*/

#include<stdio.h>
#include<stdlib.h>
#define n 5
int main(){
	int m[n][n], valor, i, j, k, encontrou;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m[i][j] = rand()%100;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("% 4d", m[i][j]);
		}
		printf("\n");
	}
	for(k=0;k<n;k++){
		printf("digite um numero: ");
		scanf("%d", &valor);
		encontrou = 0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(valor==m[i][j]){
					encontrou = 1;
					printf("linha: %d e coluna: %d", i+1, j+1);
					j=n;
					i=n;
				}
			}
		}
		if(encontrou == 0){
			printf("Nao tem");
		}
		printf("\n");		
	}
}
