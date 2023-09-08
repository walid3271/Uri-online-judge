#include<stdio.h>
int main ()
{
    int xx,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,w,x,y,z;
    double N;
    scanf("%lf",&N);
    if(N>=0 && N<=1000000)
    {
        xx=N*100;
        a=xx/10000;
        b=xx-(a*10000);

        c=b/5000;
        d=b-(c*5000);

        e=d/2000;
        f=d-(e*2000);

        g=f/1000;
        h=f-(g*1000);

        i=h/500;
        j=h-(i*500);

        k=j/200;
        l=j-(k*200);

        m=l/100;
        n=l-(m*100);

        o=n/50;
        p=n-(o*50);

        q=p/25;
        r=p-(q*25);

        s=r/10;
        t=r-(s*10);

        w=t/5;
        x=t-(w*5);

        y=x/1;
        z=x-(y*1);
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100,00\n",a);
        printf("%d nota(s) de R$ 50,00\n",c);
        printf("%d nota(s) de R$ 20,00\n",e);
        printf("%d nota(s) de R$ 10,00\n",g);
        printf("%d nota(s) de R$ 5,00\n",i);
        printf("%d nota(s) de R$ 2,00\n",k);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1,00\n",m);
        printf("%d moeda(s) de R$ 0.50\n",o);
        printf("%d moeda(s) de R$ 0.25\n",q);
        printf("%d moeda(s) de R$ 0.10\n",s);
        printf("%d moeda(s) de R$ 0.05\n",w);
        printf("%d moeda(s) de R$ 0.01\n",y);
    }
    return 0;
}



