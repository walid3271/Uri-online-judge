#include<stdio.h>
int main()
{
    int n,a,b,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<10 && b>=10)
        {
            if(c==0)
                printf("0%d:%d - A porta fechou!\n",a,b);
            else if(c==1)
                printf("0%d:%d - A porta abriu!\n",a,b);
        }
        else if(a>=10 && b<10)
        {
            if(c==0)
                printf("%d:0%d - A porta fechou!\n",a,b);
            else if(c==1)
                printf("%d:0%d - A porta abriu!\n",a,b);
        }
        else if(a<10 && b<10)
        {
            if(c==0)
                printf("0%d:0%d - A porta fechou!\n",a,b);
            else if(c==1)
                printf("0%d:0%d - A porta abriu!\n",a,b);
        }
        else
        {
            if(c==0)
                printf("%d:%d - A porta fechou!\n",a,b);
            else if(c==1)
                printf("%d:%d - A porta abriu!\n",a,b);
        }


    }
    return 0;
}
