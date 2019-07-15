/*Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    //coordenadas x y
    int x, y;
    
    while(1){
        //pega x y
        scanf("%d %d", &x, &y);
        if(x>0 && y> 0)
        {   //situação do primeiro quadrante
            printf("primeiro\n");
        }
        if(x<0 && y> 0)
        {   //situação do segundo quadrante
            printf("segundo\n");
        }
        if(x<0 && y< 0)
        {   //situação do terceiro quadrante
            printf("terceiro\n");
        }
        if(x>0 && y< 0)
        {   //situação do quarto quadrante
            printf("quarto\n");
        }
        if ( x== 0 || y == 0)
            //situação em que uma das coordenadas for nula
            break;
    }
    
    return 0;
}

