#include<stdio.h>
int main()
{
    double N[12][12],sum=0;
    int i,j,n=5,m=6;
    char X[2];
    scanf("%s",&X);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }

    for(i=7; i<12; i++)
    {
        for(j=n; j<=m; j++)
        {
            sum=sum+N[i][j];
        }
        n--;
        m++;
    }
    if(X[0]=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/30.0);
    return 0;
}

