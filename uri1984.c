#include<stdio.h>
int main()
{
    int i;
    long long int n;
    scanf("%lld",&n);
    while(n)
    {
        i=n%10;
        n=n/10;
        printf("%d",i);
    }
    printf("\n");
    return 0;
}
