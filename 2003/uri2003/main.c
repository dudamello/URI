#include <stdio.h>

int main() {
    int hour, min;
    
    while (scanf("%d:%d", &hour, &min) != EOF){
        printf("Atraso maximo: ");
        if(hour<7 || (hour==7 && min==0 )) printf("0\n");
        else printf("%d\n", ((hour+1)-8)*60+min);
    }
    
    return 0;
}
