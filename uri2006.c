#include<stdio.h>
int main()
{
    int n,i,a[10],count=0;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(n==a[i])
            count++;
    }
    printf("%d\n",count);
    return 0;
}
