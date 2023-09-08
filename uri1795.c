#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x==0)
        printf("%d\n",1);
    else if(x==1)
        printf("%d\n",1+1+1);
    else if(x==2)
        printf("%d\n",1+2+3+2+1);
    else if(x==3)
        printf("%d\n",1+3+6+7+6+3+1);
    else if(x==4)
        printf("%d\n",1+4+10+16+19+16+10+4+1);
    return 0;
}
