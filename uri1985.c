#include<stdio.h>
int main()
{
    int n,x,y,i;
    float j,sum=0.0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d%d",&x,&y);
        if(x==1001)
            j=1.5*y;
        else if(x==1002)
            j=2.5*y;
        else if(x==1003)
            j=3.5*y;
        else if(x==1004)
            j=4.5*y;
        else if(x==1005)
            j=5.5*y;

            sum=sum+j;
    }
    printf("%.2f\n",sum);
    return 0;
}

