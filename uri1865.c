#include<stdio.h>
int main()
{
    char s[100];
    int n,i,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%s%d",&s,&m);
         if(!strcmp(s,"Thor"))
            printf("Y\n");
         else
            printf("N\n");
    }

    return 0;
}

