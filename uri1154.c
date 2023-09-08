#include<stdio.h>
int main()
{
    int x,i;
    float avg,count=0,sum=0;
    while(1){
        scanf("%d",&x);
    if(x<0)
        break;
        sum=sum+x;
        count++;
        avg=sum/count;
    }
    printf("%.2f\n",avg);
    return 0;
}


