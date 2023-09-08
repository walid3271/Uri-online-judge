#include<stdio.h>
int main()
{
    int a[6],i,count=0;
    for(i=0; i<=4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<=4; i++)
    {
        if(a[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}

