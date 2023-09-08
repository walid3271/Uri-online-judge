#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l;
    char s[10000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&s);
        l=strlen(s);
        printf("%.2f\n",l/100.0);
    }
    return 0;
}
