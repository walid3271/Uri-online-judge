#include<stdio.h>
int main()
{
    int T,i,lenth;
    char c[100];
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%s",c);
        lenth=strlen(c);
        if(lenth>=0 && lenth<=25)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}
