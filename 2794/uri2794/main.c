#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0, j=0, menor, confirma=0;
    unsigned long int N;
    typedef struct
    {
        unsigned long int D;
        unsigned long int T;
    } vetor;
    vetor *montanhas;
    
    scanf("%lu", &N);
    
    montanhas = (vetor*)calloc(N, sizeof(vetor));
    
    while(i<N)
    {
        scanf("%lu %lu", &montanhas[i].D, &montanhas[i].T);
        i++;
    }
    
    for(i=0; i<N; i++)
    {
        menor = i;
        for(j=i+1; j<N; j++)
        {
            if(montanhas[j].D < montanhas[menor].D)
            {
                menor = j;
            }
        }
        if (menor != i)
        {
            long aux;
            aux = montanhas[i].D;
            montanhas[i].D = montanhas[menor].D;
            montanhas[menor].D = aux;
            aux = montanhas[i].T;
            montanhas[i].T = montanhas[menor].T;
            montanhas[menor].T = aux;
        }
    }
    
    for(i=0; i<(N-1); i++)
    {
        if(montanhas[i].T < montanhas[i+1].T)
        {
            printf("N\n");
            return 0;
        }
        else
        {
            confirma++;
        }
    }
    if (N == confirma)
    {
        printf("S\n");
    }
    return(0);
}
