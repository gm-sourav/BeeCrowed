#include<stdio.h>
int main()
{
    int i,g,n=0,i_w=0,g_w=0,d=0,t;
    while (1)
    {
       scanf("%d %d",&i,&g);
       printf("Novo grenal (1-sim 2-nao)\n");
       n++;

       if (i > g)
       {
            i_w++;
       }else if (i < g)
       {
           g_w++;
       }
       else{
        d++;
       }
       scanf("%d",&t);

       if (t==1)
       {
            continue;
       }
       else{
        break;
       }
    }
       printf("%d grenais\n",n);
       printf("Inter:%d\n",i_w);
       printf("Gremio:%d\n",g_w);
       printf("Empates:%d\n",d);
       if (i_w > g_w)
       {
            printf("Inter venceu mais\n");
       }
       else if (i_w < g_w)
       {
         printf("Gremio venceu mais\n");
       }
       else{
          printf("Não houve vencedor\n");
       }
       
       


    return 0;
}
