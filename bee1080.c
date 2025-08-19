#include<stdio.h>
int main()
{
    int n,p,h;

    for ( int i = 1; i <= 100; i++)
    {
        scanf("%d",&n);

        if (n > h)
        {
            h = n;
            p = i;
        }
        
    }
    
    printf("%d\n%d\n",h,p);

    return 0;
}