#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
        scanf(":%d",&y);
        if(x==7)
            printf("Atraso maximo: %d\n",y);
        else if(x==8)
            printf("Atraso maximo: %d\n",y+60);
        else if(x==9)
            printf("Atraso maximo: 120\n");
        else
            printf("Atraso maximo: 0\n");
    }
    return 0;
}
