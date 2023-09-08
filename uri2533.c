#include<stdio.h>
int main()
{
   int n,i,s1,s2,x[50],y[50];
   float z;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d%d",&x[i],&y[i]);
   }
   s1=s2=0;
   for(i=0;i<n;i++)
   {
       s1=s1+(x[i]*y[i]);
       s2=s2+y[i];
   }
       z=s1/(s2*100);
       printf("%.4lf\n",z);
    return 0;
}

