#include<stdio.h>
int main()
{
    int speed,time,distance;
    
    scanf("%d %d", &time, &speed);
    distance = (speed * time) / 12.0;
    
    printf("%.3lf\n",distance);
    return 0;




}