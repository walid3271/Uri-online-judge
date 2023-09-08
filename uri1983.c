#include<stdio.h>
int main()
{
    int n,i,z;
    scanf("%d",&n);
    int x[n];
    double y[n],max=0.0;
    {
        for(i=0; i<n; i++)
            scanf("%d%lf",&x[i],&y[i]);
    }
    for(i=0; i<n; i++)
    {
        if(max<y[i])
        {
            max=y[i];
            z=i;
        }
    }
    if(max<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",x[z]);
    return 0;
}
