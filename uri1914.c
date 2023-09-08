#include<stdio.h>
int main()
{
    char s1[200],s2[200],s3[200],s4[200];
    long long int a,b,x;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%s",s1,s2,s3,s4);
        scanf("%lld%lld",&a,&b);
        x=a+b;
        if(s2[0]=='I')
        {
            if(x%2==0)printf("%s\n",s3);
            else printf("%s\n",s1);
        }
        else
        {
            if(x%2==0)printf("%s\n",s1);
            else printf("%s\n",s3);
        }
    }
    return 0;
}
