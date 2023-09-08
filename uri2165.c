#include<stdio.h>
int main()
{
    char s[600];
    gets(s);
    if(strlen(s)>140)
        printf("MUTE\n");
    else
        printf("TWEET\n");
    return 0;
}
