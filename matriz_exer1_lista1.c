//Faça um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da diagonal principal.

#include<stdio.h>
#include<stdlib.h>
#define n 5

int main(){
  int mat[n][n];
  int i, j, soma;
  soma = 0;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      mat[i][j] = rand()%10;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("% d", mat[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<n;i++){
    soma += mat[i][i];
  }
  printf("soma: %d", soma);
}