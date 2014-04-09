#include<stdio.h>
main()
{
      long long int sum,n;
      int i,j,t,count;
      scanf("%d",&t);
      while(t--)
      {
                  sum=0;
                  scanf("%d",&j);
              for(i=0;i<j;i++)
              { scanf("%lld",&n);
               sum=(sum+n)%j;
               }
               if(sum==0)printf("YES\n");
                 else
                printf("NO\n");
                 }
                 return 0;
                 }
                 
               
