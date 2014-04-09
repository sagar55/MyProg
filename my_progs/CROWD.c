#include<stdio.h>
#define MOD 17
 long long int result ;
long long int power(long long int x,long long int n)
  {
          result=1;
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
      long long int n,t,i,j;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&n);
                if(n<3)
                i=0;
                else{
                if(n%2==0)
                 j=((((n-2)/2)%MOD)*(n-1)%MOD)%MOD;
                else
                j=    ((((n-1)/2)%MOD)*(n-2)%MOD)%MOD;
                 i=(power(2,n-1)+MOD-2-j)%MOD;}
                printf("%lld\n",i);
                }
                return 0;
                }
