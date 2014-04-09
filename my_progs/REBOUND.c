#include<stdio.h>
#include<math.h>
main()
{
      long long int i,t,x,y,z,m,j,n,q;
      scanf("%lld",&t);
      while(t--)
      {scanf("%lld%lld%lld",&x,&y,&z);
         j=x*x+y*y+2*z*y;
        i=sqrt(j);
        if(j==i*i)
        { n=y+2*z;
          m=x*z+z*i;
           q=m/n;
           if(q*n==m)
           printf("%lld\n",q);
           else
           printf("Not this time.\n"); 
           }
           else
           printf("Not this time.\n");
           }
           return 0;
           }
