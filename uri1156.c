#include<stdio.h>
int main()
{
    float i,sum=0,j=1;
    for(i=1; i<=39; i=i+2)
    {
        sum=sum+i/j;
        j=j*2;
    }
    printf("%.2f\n",sum);
    return 0;
}



