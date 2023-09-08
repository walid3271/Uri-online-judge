#include<stdio.h>
int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        for(i=1; i<=x; i++)
        {
            if(y/i==3 && x%i==0 && y%i==0)
                printf("%d\n",i);
        }
    }
    return 0;
}
