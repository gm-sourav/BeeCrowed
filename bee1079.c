#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    while (n--)
    {
        int i,j;
        float A[3],avg;
        for ( i = 0; i <= 3; i++)
        {
           scanf("%f",&A[i]);
        }
         A[1] = A[1] * 2;
           A[2] = A[2] * 3;
           A[3] = A[3] * 5;
        for ( j = 0; i < 3; j++)
        {
           float sum = sum + A[j];
           float avg = sum / 10;
          
        }
        printf("%.1f\n",avg);
      
        

        
    }
    


    return 0;
}