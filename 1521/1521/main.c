/* Haverá diversos casos de teste. Cada caso de teste inicia com um inteiro N (3 ≤ N ≤ 50).
 
 A seguir, haverão N inteiros ni (1 ≤ ni ≤ N, para todo 1 ≤ i ≤ N), onde cada inteiro ni significa que o aluno i entregou o aluno ni.
 
 Ou seja, se o terceiro número for 4, significa que o terceiro aluno entregou o quarto aluno. Se, ao contrário, o número for o dele mesmo, significa que ele se entregou.
 
 Em seguida haverá um inteiro K (1 ≤ K ≤ N), indicando quem foi o aluno com o qual o professor iniciou sua investigação.
 
 O último caso de teste é identificado quando N = 0, o qual não deve ser processado. */

#include <stdio.h>

#define true 1
#define false 0
#define MAXSIZE 60



int main ()
{
    
    int i;
    int lista;
    int alunos[MAXSIZE];
    
    while (true)
    {
        
        scanf("%d", &lista);
        //se a entrada for 0 acaba
        if (lista == 0)
            break;
        //pega a sequencia de alunos nesse vetor
        for (i = 1; i <= lista; ++i)
            scanf("%d", &alunos[i]);
        // aluno com o qual o professor iniciou sua investigação.
        scanf("%d", &i);
        
        while (alunos[i] != i)
            i = alunos[i];
        //saida
        printf("%d\n", i);
        
    }
    return 0;
}
