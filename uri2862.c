#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }
    return 0;
}
