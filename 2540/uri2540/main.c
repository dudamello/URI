#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, imp, nao, jog;
    int *vot;
    
    while(scanf("%d", &jog) != EOF){
        imp = 0;
        nao = 0;
        vot = (int*)calloc(jog, sizeof(int));
        
        for(i=0; i<jog; i++){
            scanf("%d", &vot[i]);
        }
        

        
        for(i=0; i<jog; i++){
            if(vot[i] == 1){
                imp++;
            }else if(vot[i] == 0){
                nao++;
            }

        }


        if(imp >= nao+nao){
            printf("impeachment\n");
        }
        else{
            printf("acusacao arquivada\n");
        }
        
    }
    return 0;
}
