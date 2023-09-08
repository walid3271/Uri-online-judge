#include<stdio.h>
int main()
{
    char name;
    double x,y,a,b;
    scanf("%s%lf%lf",&name,&x,&y);
    a=y*0.15;
    b=x+a;
    printf("TOTAL = R$ %.2lf\n",b);
    return 0;
}
