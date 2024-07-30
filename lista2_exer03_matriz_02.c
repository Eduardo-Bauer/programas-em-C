/*Faça um programa que leia uma matriz M[5][5], onde cada posição contem um número entre 0 e 9 e cada linha da matriz representa um número de 5 dígitos. 
O algoritmo deve calcular a soma dos 5 números contidos na matriz colocando o resultado em um vetor Soma[6]. Escreva ao final o vetor Soma.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define n 5
void faz_matriz(int mat[n][n]){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j] = rand()%10;
        }
    }
}
void escreve_matriz(int mat[n][n]){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("% d", mat[i][j]);
        }
        printf("\n");
    }
}
void soma_matriz(int mat[n][n]){
    int i, j, vai, soma[6], s;
    vai = 0;
    for(j=n-1;j>=0;j--){
        s = vai;
        for(i=0;i<n;i++){ 
            s += mat[i][j];
        }
        soma[j+1] = s%10;
        vai = fabs(s/10);
    }
    printf("\n");
    soma[0] = vai;
    for(i=0;i<6;i++){
        printf("%d ", soma[i]);
    }
}
int main(){
    int mat[n][n];
    faz_matriz(mat);
    escreve_matriz(mat);
    soma_matriz(mat);
}
