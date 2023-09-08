#include<stdio.h>
int main()
{
    int x,i,k=1;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        else
        {
            k=1;
            printf("%d",k);
            for(i=1; i<=x-1; i++)
            {
                k++;
                printf(" %d",k);
            }
        }printf("\n");
    }
    return 0;
}
