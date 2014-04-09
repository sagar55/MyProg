#include<stdio.h>
long long int mod=1000000000;
main()
{
      long long int c[11]={0},a[11]={0},n,t,k,p,sum,i,j;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&k);
                for(i=1;i<=k;i++)
                scanf("%lld",&a[i]);
                for(i=1;i<=k;i++)
                scanf("%lld",&c[i]);
                scanf("%lld",&n);
                if(n<=k)
                printf("%lld",a[n]);
                else
                {     p=k;
                     while(p<n)
                {sum=0;
                   for(i=k,j=1;j<=k;j++,i--)
                   sum=(sum+(c[j]*a[i])%mod)%mod;
                   a[k+1]=sum;
                   for(i=1;i<=k;i++)
                   a[i]=a[i+1];
                   p++;
                   }
                   printf("%lld",a[k]);
                   }
                   }
                   }                   
