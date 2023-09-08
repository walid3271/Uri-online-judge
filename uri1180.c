#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d", &n);
    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    int m=x[0];
    for(i=1; i<n; i++)
    {
        if(m>x[i])
        {
            m=x[i];
            count=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",m,count);
    return 0;
}
