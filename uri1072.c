#include<stdio.h>
int main()
{
    int n,x,i,in=0,out=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x>=10 && x<=20)
        {
            in=in+1;
        }
        else
        {
            out=out+1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
