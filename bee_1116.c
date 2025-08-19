#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {

    float x,y;
    scanf("%f %f",&x,&y);

    if (y == 0)
    {
       printf("divisao impossivel\n");
    }
    else{
       float result;
       result = x / y;
       printf("%0.1f\n",result);
    }


    }

    return 0;
}