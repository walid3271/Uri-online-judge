#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(i=x-1; i>y; i--)
        {
            if(i%2!=0)
                sum=sum+i;
        }
        printf("%d\n",sum);
    }
    else
        printf("0\n");
    return 0;
}
