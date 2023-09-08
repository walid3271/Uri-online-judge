#include<stdio.h>
int main()
{
    int n,x,y,temp,z=0,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        if(x%2==0)
            x--;
            x=x+2;
        for(j=x; j<y; j=j+2)
        {
            z=z+j;
        }
        printf("%d\n",z);
        z=0;
    }
    return 0;
}
