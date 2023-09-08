#include<stdio.h>
int main()
{
    int n,count;
    float x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%f",&x);
        count=0;
        while(x>1)
        {
            x=x/2;
            count++;
        }
        printf("%d dias\n",count);
    }
    return 0;
}
