#include<stdio.h>
int main()
{
    float a,b,c,perimeter,area;
    scanf("%f %f %f",&a,&b,&c);
    if ( a + c > b && a + b > c && b + c > a )
    {
        perimeter = a + b + c;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else{
            area = 0.5 * (a + b)*c;
            printf("Area = %.1f\n",area);


    }
    return 0;



}