#include<stdio.h>
main()
{
      long long int i,j,n;
      scanf("%lld",&n);
      while(n!=0)
      {
                 j=0;
                 for(i=1;i<=n;i++)
                    j=j+i*i;
                    printf("%lld\n",j);
                    scanf("%lld",&n);
                    }
                    getch();
                    }
                    
