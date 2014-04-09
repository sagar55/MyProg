#include<stdio.h>
main()
{
   long long int t,a,b,c;
 scanf("%lld",&t);
 while(t-->0)
 {
             scanf("%lld%lld%lld",&a,&b,&c);
             c=a*a-2*b;
             printf("%lld\n",c);
}return 0;
      }

