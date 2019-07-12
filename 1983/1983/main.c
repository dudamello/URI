#include <stdio.h>

int main() {
    int qtdAlunos = 0;
    
    //recebe a quantidade de alunos
    scanf("%d", &qtdAlunos);
    
    //definido tamanho dos vetores e outras variaveis
    int matricula[qtdAlunos], i, pos;
    double nota[qtdAlunos], maior = 0.0;

    //recebe a matricula e a nota dos alunos
    for(i=0; i<qtdAlunos; i++){
        scanf("%d %lf", &matricula[i], &nota[i]);
    }
    
    //achar a maior nota
    
    for(i=0; i<qtdAlunos; i++){
        if(maior<nota[i]){
            maior = nota[i];
            pos = i;
        }
    }
    
    //imprime resultado
    if(maior<8){
        printf("Minimum note not reached\n");
    }else{
        printf("%d\n", matricula[pos]);
    }
    
   
    return 0;
}
