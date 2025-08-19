#include<stdio.h>
int main()
{

    float n1,n2,n3,n4,sum,avg;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    sum = n1 + n2 + n3 + n4;
    avg = sum / 4 ;  


    if (avg >= 7)
    {
    printf("Aluno aprovado.\n");
    }
    else if (avg < 5)
    {
        printf("Aluno reprovado.");
    }
    
    return 0;



}