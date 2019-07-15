/*Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, x = 0;
    //le o valor n
    scanf("%d", &N);
    int i=1;
    while(x < N){
        printf("%d %d %d PUM\n", i, i+1, i+2);
        //atualiza i
        i+=4;
        //atualiza x
        x++;
    }
    
    return 0;
}
