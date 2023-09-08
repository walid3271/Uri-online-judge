#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int j,l,i;
    while(gets(s)!='\0')
    {
        j=0,l=strlen(s);
        for(i = 0; i < l; i++)
        {
            if(s[i]!=' ')
            {
                j++;
                if(s[i]>96 && j%2==1)
                    s[i]=s[i]-32;
                else if(s[i]<96 && j%2==0)
                    s[i]=s[i]+32;
            }
        }
        s[i]='\0';
        printf("%s\n",s);
    }
    return 0;
}
