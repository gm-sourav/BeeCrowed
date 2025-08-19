#include<stdio.h>
int main()
{
  float intput,avg,m;
  int i,count = 0;
  for ( i = 1; i <= 6; i++)
  {
    scanf("%f",&intput);
    if (intput > 0)
    {   
        m = m + intput;
        count++;
    }
    
  }

  avg = m / count;
  printf("%d valores positivos\n",count);
  printf("%.1f\n", avg);

return 0;

}