#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&x);
        if(x>2015)
            printf("%d A.C.\n",x-2014);
        else if(x<2015)
            printf("%d D.C.\n",2015-x);
        else
            printf("1 A.C.\n");
    }
    return 0;
}
