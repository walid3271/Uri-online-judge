#include<stdio.h>
int main()
{
    int x,a,b,c,d,e,f,g,h,i,j,k,l,y;
    scanf("%d",&x);
    a=x/1000;
    b=x-(a*1000);
    if(a>0)
    {
        for(y=1; y<=a; y++)
            printf("M");
    }
    c=b/500;
    d=b-(c*500);
    if(c>0)
    {
        for(y=1; y<=c; y++)
            printf("D");
    }
    e=d/100;
    f=d-(e*100);
    if(e>0)
    {
        for(y=1; y<=e; y++)
            printf("C");
    }
    g=f/50;
    h=f-(g*50);
    if(g>0)
    {
        for(y=1; y<=g; y++)
            printf("L");
    }
    i=h/10;
    j=h-(i*10);
    if(i>0)
    {
        for(y=1; y<=i; y++)
            printf("X");
    }
    k=j/5;
    if(k>0)
    {
        for(y=1; y<=k; y++)
            printf("V");
    }
    l=j-(k*5);
    if(l>0)
    {
        for(y=1; y<=l; y++)
            printf("I");
    }
    printf("\n");
    return 0;
}

