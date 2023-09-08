#include<stdio.h>
int main()
{
    int a,n,i,k=0;
    scanf("%d%d",&a,&n);
    while(n<=0)
        scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        k=k+i+a;
    }
    printf("%d\n",k);
    return 0;
}
