#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
        printf("Perimetro = %0.1lf\n",a+b+c);
    else
        printf("Area = %0.1lf\n",0.5*(a+b)*c);
    return 0;
}
