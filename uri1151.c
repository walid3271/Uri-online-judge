#include<stdio.h>
int main()
{
    int n,i,f,s,fi;
    scanf("%d",&n);
    f=0,s=1;
    for(i=1;i<=n-1;i++)
    {
        printf("%d ",f);
        fi=f+s;
        f=s;
        s=fi;
    }
    printf("%d\n",f);
    return 0;
}
