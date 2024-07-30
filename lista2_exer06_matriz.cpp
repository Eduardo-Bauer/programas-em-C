/*Uma matriz é dita triangular superior se todos os elementos abaixo da diagonal principal são iguais a zero, e há pelo menos um elemento não nulo acima da diagonal principal. Da mesma forma, uma matriz é dita triangular inferior se todos os elementos acima da diagonal principal são iguais a zero, e há pelo menos um elemento não nulo abaixo da diagonal principal. E uma matriz é dita diagonal se os elementos não nulos ocorrem somente na diagonal principal. Faça um programa que leia uma matriz M[5][5] e escreva: 0 - Se a matriz é uma matriz diagonal; 1 - Se é triangular superior; 2- Se é triangular inferior; 3 - Se não é nenhuma das anteriores.*/

#include <stdio.h>
#include <stdlib.h>
#define n 5
void le_matriz(int mat[n][n]){
  int i, j;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      mat[i][j] = rand()%10;
    }
  }
}
void escreve_matriz(int mat[n][n]){
  int i, j;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
int tipo_matriz(int mat[n][n]){
  int i, j, abaixo, acima, diagonal;
  acima = 0;
  abaixo = 0;
  diagonal = 0;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==j){
        if(mat[i][j]!=0){
          diagonal++;
        }
      }else{
        if(i<j){
          if(mat[i][j]!=0){
            acima++;
          }
        }else{
          if(mat[i][j]!=0){
            abaixo++;
          }
        }
      }
    }
  }
  if(abaixo==0 && acima!=0){
    return 1;
  } else{
    if(acima==0 && abaixo!=0){
      return 2;
    } else{
      if(abaixo==0 && acima==0 && diagonal!=0){
        return 0;
      }else{
        return 3;
      }
    }
  }
}
int main() {
  int mat[n][n], resultado;
  le_matriz(mat);
  escreve_matriz(mat);
  resultado = tipo_matriz(mat);
  printf("Resultado: %d\n", resultado);
  printf("0 para matriz diagonal, 1 para matriz triangular superior, 2 para matriz triangular inferior, 3 para nenhuma das outras\n");
}
