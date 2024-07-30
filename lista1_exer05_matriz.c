/*Uma matriz identidade é uma matriz que possui 1 em todos os elementos da diagonal principal, 
e 0 em todas as outras posições. Faça um programa que leia uma matriz M[5][5] e verifique se é uma matriz identidade escrevendo: 
1 - Se é uma matriz identidade; 0 - Se não é uma matriz identidade.*/

#include<stdio.h>
#define n 5
int main(){
	int i, j, cont, numeros0, identidade;
	int m[n][n];
	cont = 0;
	numeros0 = 0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("digite o numero para a matriz na pos %d%d: ", i,j);
			scanf("%d", &m[i][j]);
			if(m[i][j]==0){
				numeros0 += 1;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("% d", m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		if(m[i][i]==1){
			cont += 1;
		}
	}
	if(numeros0==(n*n)-n && cont==n){
		identidade = 1;
	}else{
		identidade = 0;
	}
	printf("sua matriz e %d, 1 para matriz identidade e 0 para nao\n", identidade);
	printf("quantos 1: %d, quantos 0: %d", cont, numeros0);
}
