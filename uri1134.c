#include<stdio.h>
int main()
{
    int x,a=0,g=0,d=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==4)
        {
            break;
        }
        else if(x==1)
        {
            a++;
        }
        else if(x==2)
        {
            g++;
        }
        else if(x==3)
        {
            d++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}
