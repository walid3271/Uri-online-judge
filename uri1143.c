#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>1 && n<1000)
    {
        for(i=1; i<=n; i++)
        printf("%d %d %d\n",i,(i*i),(i*i*i));
    }
    return 0;
}
