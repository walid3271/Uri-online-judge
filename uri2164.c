#include<stdio.h>
int main()
{
    int n;
    double a,b,x,y,z;
    scanf("%d",&n);
    a=(1+sqrt(5))/2;
    b=(1-sqrt(5))/2;
    x=pow(a,n);
    y=pow(b,n);
    z=sqrt(5);
    printf("%.1lf\n",((x-y)/z));
    return 0;
}
