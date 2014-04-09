#include<stdio.h>
#include<math.h>
main()
{
     long long int p,n,q,i,t;
     scanf("%lld",&t);
     while(t--)
     {
               scanf("%lld",&n);
               p=n;i=0;
               while(p>0)
               { i++;
               n=p;
               p=n-pow(2,i);
               }
               while(i)
               {
                       if(n>pow(2,i-1))
                       printf("6");
                       else
                       printf("5");
                       i--;
                       if(pow(2,i)<n)
                       n=n-pow(2,i);
                       }
                        printf("\n");
                       }
                       return 0;
                       }
