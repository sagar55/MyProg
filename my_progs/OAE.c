#include<stdio.h>
int MOD=314159l;
long long int power(long long int x,long long int n)
  {
            long long int result=1;
  while(n>0)
    { 
        if(n%2==1)
      result=(result*x)%MOD;
      x=(x*x)%MOD;
      n/=2;
}
  return result;
}
main()
{
      long long int t,n,i;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&n);
                if(n==1)
                i=9;
                else
                i=5*power(10,n-1)+4*power(8,n-1);
                printf("%lld\n",i%MOD);
                }
                return 0;
                }
