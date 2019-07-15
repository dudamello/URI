#include <stdio.h>
int main(){
    int N, i, j, k, x, y, pos;
    int capturou = 0;
    int grid[200][200];
    scanf("%d", &N);
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            scanf("%d", &grid[i][j]);
    int especie[1000];
    for(i = 0; i < 1000; i++)
    {
        especie[i] = 0;
    }
    for(i = 0; i < N*2; i++)
    {
        scanf("%d %d", &x, &y);
        pos = grid [x-1][y-1] - 1;
        if (especie[pos] == 0)
        {
            especie[pos] = 1;
            capturou ++;
        }
    }
    printf("%d\n", capturou);
    return 0;
}
