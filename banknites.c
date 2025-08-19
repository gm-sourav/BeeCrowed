#include<stdio.h>
int main()
{
    int hun,fif,twn,ten,five,two,one,con;
    scanf("%d", &con);
    printf("%d\n",con);

    hun = con / 100;
    con = con - (hun * 100);
    fif = con / 50;
    con = con - (fif * 50);
    twn = con / 20;
    con = con - (twn * 20);
    ten = con / 10;
    con = con - (ten * 10);
    five = con / 5;
    con = con - (five * 5);
    two = con / 2;
    con = con - (two * 2);
    one = con / 1;

    

    printf("%d nota(s) de R$ 100,00\n",hun);
    printf("%d nota(s) de R$ 50,00\n",fif);
    printf("%d nota(s) de R$ 20,00\n",twn);
    printf("%d nota(s) de R$ 10,00\n",ten);
    printf("%d nota(s) de R$ 5,00\n",five);
    printf("%d nota(s) de R$ 2,00\n",two);
    printf("%d nota(s) de R$ 1,00\n",one);

     return 0;
     




}