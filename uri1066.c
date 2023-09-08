#include<stdio.h>
int main()
{
    int arr[4],i,e=0,o=0,p=0,n=0,a=0;
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        if(arr[i]%2==0)
        {
            e=e+1;
        }
        if(arr[i]%2!=0)
        {
            o=o+1;
        }
        if(arr[i]>0)
        {
            p=p+1;
        }
        if(arr[i]<0)
        {
            n=n+1;
        }
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
    return 0;
}
