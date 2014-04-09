#include<stdio.h>
int  gcd(int  i,int  j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
  main()
  {
        int t,n,i;
        long long int sum;
        scanf("%d",&t);
        while(t--)
        {
                  sum=0;
                  scanf("%d",&n);
                  if(n%2==0){
                  for(i=1;i<=n/2;i++)
                     sum=sum+n/gcd(n,i);
                     sum=sum*n;
                     }
                     else
                     {     for(i=1;i<=n/2;i++)
                     sum=sum+n/gcd(n,i);
                     sum=sum*n+n;}
                  printf("%lld\n",sum);
                  }
                  return 0;
                  }
                  
              
