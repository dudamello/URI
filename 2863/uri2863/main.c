#include <stdio.h>
#include <stdlib.h>


void swap(float *a, float *b) {
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}


int main() {
    int qtd, i, j, menor;
    float *vet;

    
    
    
    while(scanf("%d", &qtd)!= EOF){
        vet = (float*)calloc(qtd, sizeof(float));
        for(i=0; i<qtd; i++){
            scanf("%f", &vet[i]);
        }
        for(i=0; i<qtd; i++){
            menor = i;
            for(j=i+1; j<qtd; j++){
                if(vet[j] < vet[menor]){
                    menor = j;
                }
            }
            if (menor != i) {
                swap(&vet[i], &vet[menor]);
            }
        }
        printf("%.2f\n", vet[0]);
        free(vet);
    }

    return 0;
}
