#include<stdio.h>
int main()
{
    char a[1000];
    int result;
    gets(a);
    result=strlen(a);
    if(result<81)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
