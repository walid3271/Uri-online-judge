#include<stdio.h>
int main()
{
    int m,n,i,a[20],x=0,y,count=0,count2=0;
    scanf("%d%d",&m,&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    y=a[0]-x;
    x=a[0];
    for(i=1; i<n; i++)
    {
        y=a[i]-x;
        x=a[i];
        if(y<0)
            y=y*(-1);
        if(y>m)
        {
            count++;
            break;
        }
        else
        {
            count2++;
        }
    }
    if(count>0)
        printf("GAME OVER\n");
    else if(count2>0)
        printf("YOU WIN\n");
    return 0;
}
