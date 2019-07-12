#include <stdio.h>

int main() {
    //entrada
    int n;
    
    while (scanf("%d", &n) && n!=0) {
        int t=n,y;
        while(t--){
            scanf("%d", &y);
            if(y%2!=0){
                printf("%d\n", y+(y-1));
            }else{
                printf("%d\n", y+(y-2));
            }
        }
    }
   
    return 0;
}
