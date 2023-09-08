#include<stdio.h>
int main()
{
    double n,m;
    while(1)
    {
        scanf("%lf%lf",&n,&m);
        if(n==0 && m==0)
            break;
        printf("%.0lf\n",n*m);
    }
    return 0;
}
