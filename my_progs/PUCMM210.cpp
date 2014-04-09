#include<stdio.h>
main()
{
      int t,n,MOD=1000000003;
      long long int sum;
      scanf("%d",&t);
      while(t--)
      {scanf("%d",&n);
      sum=((10*(n*(n*((3*n*n+5*n+3)%MOD)%MOD)%MOD)%MOD+(2*n((3*n((n*n*n)%MOD)+2)%MOD))%MOD)/30)%MOD;
      printf("%lld",sum);
      }
      return 0;
      }
      
      
