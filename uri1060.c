#include<stdio.h>
int main()
{
    float a[5];
    int count=0,i;
    for(i=0; i<=5; i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0; i<=5; i++)
    {
        if(a[i]>0)
            count=count+1;
    }
    printf("%d valores positivos\n",count);
    return 0;
}
