#include<stdio.h>
#include<math.h>
main()
{
      long long int n,t,i,j,q,k,flag;
      scanf("%lld",&t);
      while(t--)
      {scanf("%lld",&n);
                if((n&(n-1))==0)
                printf("%lld 0\n",n);               
                else
                {i=log2(n);
                q=j=pow(2,i+1);
         k=0;flag=1;
                if(n%2==0){ k=n;
                while((k&(k-1))!=0)
                {k=k-j/2;
                if(k<0)
                k=k+j/2;
                if(k%2==1)
                {flag=0;
                k=0;
                break;}
                j=j/2;
                }
                if(flag!=0)
                k=log2(k);}
                printf("%lld %lld\n",q,i+1-k);
        }}
        return 0;}
