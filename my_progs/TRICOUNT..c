#include<stdio.h>
main()
{
      long long int t,n;
      scanf("%lld",&n);
      while(n--)
      {
                scanf("%lld",&t);
                t=(t*(t+2)*(2*t+1))/8;
                printf("%lld\n",t);
                }
                getch();
                }
                
