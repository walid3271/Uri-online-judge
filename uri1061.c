#include<stdio.h>
int main()
{
    int ah,am,as,bh,bm,bs,d1,h1,m1,s1,d2,h2,m2,s2,xs,xm,xh,xd,x1,x2,x3;
    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);
    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);

    ah=(d1*24)+h1;
    am=(ah*60)+m1;
    as=(am*60)+s1;

    bh=(d2*24)+h2;
    bm=(bh*60)+m2;
    bs=(bm*60)+s2;

    xs=bs-as;

    xm=xs/60;
    x1=xs-(xm*60);
    xh=xm/60;
    x2=xm-(xh*60);
    xd=xh/24;
    x3=xh-(xd*24);

    printf("%d dia(s)\n",xd);
    printf("%d hora(s)\n",x3);
    printf("%d minuto(s)\n",x2);
    printf("%d segundo(s)\n",x1);

    return 0;
}
