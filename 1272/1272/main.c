#include <stdio.h>
#include <string.h>
int main()
{
    int N, i, j, length;
    char line[52], hidden[52];
    //quantidade de casos de teste que vem a seguir
    scanf("%d", &N);
    getchar();
    for (; N > 0; --N) {
        //pega o texto
        fgets(line, 52, stdin);
        //tamanho do texto - /0
        length = strlen(line) - 1;
        
        for (i = 0, j = 0; i < length; ++i) {
            if (line[i] != ' ' && (!i || line[i-1] == ' '))
                hidden[j++] = line[i];
        }
        hidden[j] = '\0';
        //mostra a saida
        puts(hidden);
    }
    return 0;
}
