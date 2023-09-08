#include<stdio.h>
int main()
{
    int i,n[1000],j=0,x;
    scanf("%d",&x);
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==x)
        {
            j=0;
        }
    }
    return 0;
}
