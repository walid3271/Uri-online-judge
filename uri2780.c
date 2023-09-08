#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=0 && x<=800)
        printf("1\n");
    else if(x<=1400)
        printf("2\n");
    else if(x<=2000)
        printf("3\n");

    return 0;
}
