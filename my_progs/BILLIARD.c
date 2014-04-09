#include<stdio.h>
#include<math.h>
#define PI 3.141592
main()
{
     int t,a,b,c,d,e,m,i;
     double x,y,z;
      scanf("%d%d%d",&a,&b,&c);
                  scanf("%d%d",&d,&e);
               
      while(a!=0&&b!=0&&c!=0&&d!=0&&e!=0)
      {
                  x=(a*1.00*d)/(c); y=(b*1.00*e)/(c);
                  z=sqrt(x*x+y*y);
                   x=asin(y/z);
                   x=180/PI*x;
                   printf("%.2f %.2f\n",x,z);              
                  scanf("%d%d%d",&a,&b,&c);
                  scanf("%d%d",&d,&e);
                  }
                 return 0;
      }

