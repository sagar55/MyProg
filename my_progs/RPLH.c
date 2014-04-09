#include<stdio.h>
#include<math.h>
#define g 9.806
main()
{
      int t,n,m,i;
      float pi=2*acos(0.0),a,b;
      scanf("%d",&t);
      for(i=1;i<=t;i++)
      {
               scanf("%d%d",&m,&n); 
                 a=(m*g)/(n*n);
                 if(a<=1){b=(1.00*asin(a))/2;b=b*180/pi;printf("Scenario #%d: %.2f\n",i,b);}
                 else printf("Scenario #%d: -1\n",i);
                  }
                  return 0;
      }

