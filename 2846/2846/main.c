#include <stdio.h>

//declarando tamanho maximo da sequencia
#define MAXSIZE 100100

//declarando o vetor da sequencia fibonacci e o vetor que nao tem os numeros da sequencia fibonacci
long long fibonacci[MAXSIZE];
long long fibonot[MAXSIZE];

//funcao para pegar os valores da fibonot
void fib()
{
    int i, j, k;
    fibonacci[0] = 0; fibonacci[1] = 1;
    
    //faz a sequencia fibonacci
    for (i = 2; i <= MAXSIZE; ++i)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    
    //pega os valores que nao tem na sequencia fibonacci
    for (i = 1, j = 2, k = 1; i <= MAXSIZE; ++i)
        if (fibonacci[j] != i){
            fibonot[k++] = i;
        }else{
            ++j;
        }
}


int main (){
    int n;
    fib();
    scanf("%d", &n);
    printf("%lld\n", fibonot[n]);
    return 0;
}
