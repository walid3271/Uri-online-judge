#include<stdio.h>
int main()
{
    int i,k=1,j,x,y;
    scanf("%d%d",&x,&y);
    for(i=1; i<=(y/x); i++)
    {
        printf("%d",k);
        for(j=1; j<=x-1; j++)
        {
            k++;
            printf(" %d",k);
        }
        k++;
        printf("\n");
    }
    return 0;
}
