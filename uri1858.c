#include<stdio.h>
int main()
{
    int i,n,m,k,l;
    while(scanf("%d",&n)!=EOF)
    {
        l=20;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&m);
            if(m<l)
            {
                l=m;
                k=i;
            }
        }
        printf("%d\n",k);
        k=0;
    }
    return 0;
}
