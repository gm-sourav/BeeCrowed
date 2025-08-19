#include<stdio.h>
#include<stdlib.h>
int main()
{
    int M,N,i,sum;
    while (1)
    {
        scanf("%d %d",&M,&N);
    if (M <= 0 || N <= 0)
    {
        exit(0);
    }

     if (M > N)
    {
        i = M;
        M = N;
        N = i; 
    
    }
    sum = 0;
     for ( i = M; i <= N; i++)
    {  
        sum = sum + i;
        printf("%d ",i);
    }
    
    printf("Sum=%d\n",sum);
}
    
    return 0;
}