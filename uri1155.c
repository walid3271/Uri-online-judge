#include<stdio.h>
int main()
{
    float i,s,sum=0;
    for(i=1; i<=100; i++)
    {
        s=1/i;
        sum=sum+s;
    }
    printf("%.2f\n",sum);
    return 0;
}


