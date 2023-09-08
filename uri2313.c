#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        if(a==b || b==c || c==a)
            printf("Valido-Isoceles\nRetangulo: N\n");
        else if(a!=b || b!=c || c!=a)
            printf("Valido-Escaleno\nRetangulo: S\n");
    }
    else
        printf("Invalido\n");
    return 0;
}
