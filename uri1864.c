#include<stdio.h>
int main()
{
    int i,n;
    char s[34];
    strcpy(s,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
