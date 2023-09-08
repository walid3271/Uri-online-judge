#include<stdio.h>
int main()
{
    int x,y,sum=0,i;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        else if(x%2==0)
        {
            sum=0;
            for(i=1; i<=5; i++)
            {
                sum=sum+x;
                x=x+2;
            }
            printf("%d\n",sum);
        }
        else if(x%2!=0)
        {
            sum=0;
            x=x+1;
            for(i=1; i<=5; i++)
            {
                sum=sum+x;
                x=x+2;
            }
            printf("%d\n",sum);
        }
    }
return 0;
}
