#include<stdio.h>
int main()
{
    int n,x[100],i,max=0,z,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<=x[i])
        {
            max=x[i];
           count++;
        }
    }
    printf("%d\n",count+1);
    return 0;
}

