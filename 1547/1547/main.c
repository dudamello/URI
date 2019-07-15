#include<stdio.h>

int main()
{
    int tc,n,sn,i,j,tmp,ck;
    int num[10]={0};
    //quantidade de pessoas que vao tentar
    scanf("%d",&tc);
    
    while(tc--){
        //quantidade de alunos do grupo e o número secreto que deve ser adivinhado
        scanf("%d %d",&n,&sn);
        ck=0;
        tmp=0;
        //num[i] vai guardar o chute de cada pessoa
        for(i=0;i<n;i++){
            scanf("%d",&tmp);
            //pega a diferença entre o chute e o numero secreto
            if(sn>tmp){
                num[i] = sn-tmp;
            }
            else{
                num[i] = tmp-sn;
            }
        }
        //variavel do chute recebe o primeiro valor do vetor
        tmp= num[0];
        
        for(j=0;j<n;j++){
            
            if(num[j]==0){
                //a pessoa acertou o número secreto
                ck=j;
                break;
            }
            else if( tmp > num[j] ){
                //atualiza qm chutou mais próximo
                tmp=num[j];
                //variavel ck recebe a posiçao j
                ck=j;
            }
        }
        //printa a posição mais 1, pq o vetor inicia em 0
        printf("%d\n",ck+1);
        
    } // end while
    
    return 0;
}
