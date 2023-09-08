#include<stdio.h>
int main()
{
    int f=1,i,n;
    scanf("%d",&n);
    if (n>0 && n<13)
    {
        for(i=1; i<=n; i++)
            f=f*i;
        printf("%d\n",f);
    }
    return 0;
}
