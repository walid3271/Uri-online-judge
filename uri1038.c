#include<stdio.h>
int main()
{
    int y;
    float x;
    scanf("%f%d",&x,&y);
    if(x==1)
       x=y*4.00;
    else if(x==2)
        x=y*4.50;
    else if(x==3)
        x=y*5.00;
    else if(x==4)
        x=y*2.00;
    else if(x==5)
        x=y*1.50;
        printf("Total: R$ %.2f\n",x);
    return 0;
}
