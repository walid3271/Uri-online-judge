#include<stdio.h>
int main()
{
    float x,r,n;
    scanf("%f",&x);
    if(x>=0 && x<=400.00)
    {
        r=x*0.15;
        n=x+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",n,r);
    }
    else if(x>400.00 && x<=800.00)
    {
        r=x*0.12;
        n=x+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",n,r);
    }
    else if(x>800.00 && x<=1200.00)
    {
        r=x*0.10;
        n=x+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",n,r);
    }
    else if(x>1200.00 && x<=2000.00)
    {
        r=x*0.07;
        n=x+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",n,r);
    }
    else if(x>2000.00)
    {
        r=x*0.04;
        n=x+r;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",n,r);
    }
    return 0;
}
