#include<stdio.h>
long long int f(long long int n)
{
     if(n==0)
     return 0;
     else
     return 3*f(n-1)+2;
     }
main()
{
      int n,t;
      scanf("%d",&t);
      while(t--)
      {
          scanf("%d",&n);
          printf("%lld\n",f(n));
          }
          return 0;
          }     
      
