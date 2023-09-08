#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
