#include<stdio.h>
int main()
{
    int i,x,n;
    long long int a[61];
    a[0]=0;
    a[1]=1;
    for(i=2; i<=60; i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        printf("Fib(%d) = %lld\n",x,a[x]);
    }
    return 0;
}
