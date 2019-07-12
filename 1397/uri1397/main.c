#include <stdio.h>
#include <stdlib.h>

int main() {
    int rodada, a, b,i;
    int pontoa, pontob;
    
    while(scanf("%d", &rodada) != EOF && rodada != 0 ){
        pontoa = 0;
        pontob = 0;
        for(i=0; i<rodada; i++){
            scanf("%d %d", &a, &b);
            if (a>b) pontoa++;
            else if (b>a) pontob++;
        }
        printf("%d %d\n", pontoa, pontob);
    }
    
    
    return 0;
}
