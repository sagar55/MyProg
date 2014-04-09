#include<stdio.h>
#include<math.h>
main()
{ 
      long long int t,n;
       scanf("%lld",&t);
       while(t)
       {
       scanf("%lld",&n);
       if(n%2==0)
        printf("%lld\n",n/2);
        else 
        printf("%lld\n",n/2+1);
        t--;
        }
      return 0;
      }        
  
               
       

