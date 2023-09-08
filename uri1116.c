#include<stdio.h>
int main()
{
    int n,i;
    float x,y,z;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f%f",&x,&y);

        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            z=x/y;
            printf("%.1f\n",z);
        }

    }
    return 0;
}


