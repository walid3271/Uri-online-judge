#include<stdio.h>
int main()
{
    int i,j,n=1;
    double N[12][12],sum=0;
    char c[2];
    scanf("%s",c);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }
    for(i=1; i<12; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>j)
            {
                sum=sum+N[i][j];
            }
        }
        n++;
    }

    if(c[0]=='S')
        printf("%.1lf\n",sum);
    else if(c[0]=='R')
        printf("%.1lf\n",sum/3.0);
    return 0;
}
