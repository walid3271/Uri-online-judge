#include<stdio.h>
int main()
{
    int a,b,i;
    char x[10];
    scanf("%d%d",&a,&b);
    int count=a;
    while(b--)
    {
        scanf("%s",&x[i]);
        if('f'==x[i])
            count++;
        else
            count--;
    }

    printf("%d\n",count);
    return 0;
}
