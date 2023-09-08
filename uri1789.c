#include<stdio.h>
int main()
{
    int n,x,max,i,l;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&x);
            if(max<=x)
                max=x;
        }
        if(max<10)
            l=1;
        else if(max<20)
            l=2;
        else
            l=3;
        printf("%d\n",l);
    }
    return 0;
}
