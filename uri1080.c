#include<stdio.h>
int main()
{
    int n,i,k=0,l;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&n);
        if(n>k)
        {
            k=n;
            l=i;
        }
    }
    printf("%d\n%d\n",k,l);

    return 0;
}


