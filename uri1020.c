#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/365;
    b=n-(a*365);
    c=b/30;
    d=b-(c*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,c,d);
    return 0;
}
