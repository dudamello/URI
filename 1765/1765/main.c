#include <stdio.h>

#define H 5

int main() {
    int i, qtdTrapezios;
    int qtdIndividualTrapezios;
    double base1, base2;
    double area = 0.0;
    
    //recebe a qtde de trapezios e termina qnd qtdTrapezios for 0
    while (1) {
        scanf("%d", &qtdTrapezios);
        if (qtdTrapezios == 0)
            break;
        //recebe as bases e as quantidades
        for(i=1; i<=qtdTrapezios; i++){
            scanf("%d %lf %lf", &qtdIndividualTrapezios, &base1, &base2);
            //calcula a area do trapezio e multiplica pela quantidade de trapezios
            area = ((base1+base2)*H)/2;
            area = area*qtdIndividualTrapezios;
            printf("Size #%d:\nIce Cream Used: %.2lf cm2\n", i, area);
        }
        printf("\n");
    }
    return 0;
}
