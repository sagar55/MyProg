#include<stdio.h>

main()
{long long int n,m,p,i;
m=scanf("%lld",&n);
while(m!=EOF)
{  if(n%9==0){
                              p=n/9;p=p*9*9;}
                              
                              else
                              {
                                  p=n/9;i=n%9;
                                  i=i*i;p=p*9*9+i;
                              }
             printf("%lld\n",p);
             m=scanf("%lld",&n);      
      }
      return 0;
      }

