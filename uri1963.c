#include<stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf",&a)!=EOF)
    {
        scanf("%lf",&b);
        c=b-a;
        a=100.00/a;
        printf("%.2lf%%\n",c*a);
    }
    return 0;
}
