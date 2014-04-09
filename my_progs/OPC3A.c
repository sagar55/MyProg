#include<stdio.h>
main()
{
      long long int a[2],i,n,t,MOD=1000000007;
      scanf("%lld",&t);
      while(t--)
      {
                a[0]=2;a[1]=1;
                scanf("%lld",&n);
                if(n==0)
                a[0]=1;
                else{
                while(--n)
                {
                i=a[0]%MOD;
                a[0]=(a[0]*a[1])%MOD;
                a[1]=i;
                }}
                printf("%lld\n",a[0]);
                }
                return 0;
                }
