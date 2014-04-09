#include<stdio.h>
#include<math.h>
main()
{
      int i,t,a,b;
      float j,p;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&a,&b);
                p=pow(2,a);
                i=1;
                i=(b+1)/p;
                j=(b+1)/p;
                if(i==j)
                 printf("ON\n");
                 else
                 printf("OFF\n");
                 }
                 return 0;
                 }
                       
                      
