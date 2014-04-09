#include<stdio.h>
main()
{
      int t,I=1;
      double s,r;
      scanf("%d",&t);
      while(t)
      { scanf("%lf",&r);
             s=(16*r*r+1)/4;
             printf("Case %d: %.2lf\n",I,s);
             t--;
             I++;
             }
             getch();
             }
             
      
