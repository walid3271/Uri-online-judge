#include<stdio.h>
int main()
{
    float n;
    int count=0,i;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&n);
        if(n>0)
            count=count+1;
    }
    printf("%d valores positivos\n",count);
    return 0;
}

