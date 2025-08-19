#include<stdio.h>
#include<stdlib.h>
int main()
{
    int input;
    
    while (1)
    {
        
        scanf("%d",&input);

        if (input == 2002)
        {
           printf("Acesso Permitido\n");
           exit(0);
        }
        else{

            printf("Senha Invalida\n");
        }
        
    

    }
    

    return 0;
}