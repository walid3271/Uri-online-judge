#include<stdio.h>
int main()
{
    int M,N,i,sum=0;
    while(1)
    {

    scanf("%d%d",&M,&N);

        if(M<=0 || N<=0)
            break;
        else
        {
            sum=0;
            if(M>N)
            {
                for(i=N; i<=M; i++)
                {
                    printf("%d ",i);
                    sum=sum+i;
                }
                printf("Sum=%d\n",sum);
            }
            else if(M<N)
            {
                    for(i=M; i<=N; i++)
                    {
                        printf("%d ",i);
                        sum=sum+i;
                    }
                    printf("Sum=%d\n",sum);
                }
            }
        }

    return 0;
}


