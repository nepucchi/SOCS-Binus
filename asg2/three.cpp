#include <stdio.h>

int main()
{
    int i, j, N, M;
    scanf("%d %d", &N,&M);

   
    for(i=1; i<=N; i++)
    {
        
        for(j=1; j<=N; j++)
        {
        
            printf("#");
        }
        
        
        printf("\n");
    }
    printf("\n");
    
  for(i=1; i<=N; i++)
    {
        
        for(j=1; j<=N; j++)
        {
          if(i%M==0){
                printf("#");
            }
                else{
                printf(".");
        }
        
    }
        printf("\n");
    
    }
    printf("\n");
    
    for(i=1; i<=N; i++)
    {
        
        for(j=1; j<=N; j++)
        {
          if(j%M==0){
                printf("#");
            }
            else{
                printf(".");
        }
        
    }
        printf("\n");
    
}

    return 0;
}
