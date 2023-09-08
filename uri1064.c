#include<stdio.h>
int main()
{
    int count=0,i;
    float a[6],x,sum=0;
    for(i=0; i<=5; i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0; i<=5; i++)
    {
        if(a[i]>0)
        {
            count=count+1;
            sum=sum+(a[i]);
        }
    }
    x=sum/count;
    printf("%d valores positivos\n%.1f\n",count,x);
    return 0;
}
