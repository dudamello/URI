#include <stdio.h>
#include <stdlib.h>



int main()
{
    
    int n, i, j, aux, r, escada=0;
    long int e[1000];
    
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%li", &e[i]);
        }
        
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                r=e[i+1]-e[i];
            }
            
            if((e[i]+r)!=e[i+1])
            {
                escada++;
                r=e[i+1]-e[i];
            }
            
        }
        
        if(n==1)
        {
            escada=1;
        }
        
        printf("%d\n", escada);
        
        
        
    }
    
    
    return 0;
    
}

