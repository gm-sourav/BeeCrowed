#include<stdio.h>
int main()
{
    float salary;
    char c = '%';
    scanf("%f",&salary);
    
    if (salary > 0.00 && salary <= 400.00)
    {
        printf("Novo salario: %.2f\n",salary + salary * 0.15);
        printf("Reajuste ganho: %.2f\n",salary * 0.15);
        printf("Em percentual: 15 %c\n",c);
        
    }
    else if (salary > 400.01 && salary <= 800.00)
    {
        printf("Novo salario: %.2f\n",salary + salary * 0.12);
        printf("Reajuste ganho: %.2f\n",salary * 0.12);
        printf("Em percentual: 12 %c\n",c);
        
    }
    else if (salary > 800.01 && salary <= 1200.00)
    {
        printf("Novo salario: %.2f\n",salary + salary * 0.10);
        printf("Reajuste ganho: %.2f\n",salary * 0.10);
        printf("Em percentual: 10 %c\n",c);
        
    }
    else if (salary > 1200.01 && salary <= 2000.00)
    {
        printf("Novo salario: %.2f\n",salary + salary * 0.07);
        printf("Reajuste ganho: %.2f\n",salary * 0.07);
        printf("Em percentual: 7 %c\n",c);
        
    }
    else if (salary > 2000)
    {
        printf("Novo salario: %.2f\n",salary + salary * 0.04);
        printf("Reajuste ganho: %.2f\n",salary * 0.04);
        printf("Em percentual: 4 %c\n",c);
        
    }
   
    return 0;
    



}