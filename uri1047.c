#include<stdio.h>
int main ()
{
    int h1,m1,h2,m2,a,b,x,y,z;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    a=(h1*60)+m1;
    b=(h2*60)+m2;
    if (b>a)
    {
        x=b-a;
        y=x/60;
        z=x-(y*60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,z);
    }
    else
    {
        x=1440-(a-b);
        y=x/60;
        z=x-(y*60);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",y,z);
    }
    return 0;
}
