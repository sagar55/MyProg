#include<stdio.h>
main()
{
      int a,b,x,y,i;
      scanf("%d%d",&a,&b);
      x=(a+4)/2;y=a+b;
      a=sqrt(y);
      for(i=3;i<=a;i++)
      {
                      if(y%i==0){b=y/i;
                       if(i+b==x){printf("%d %d",b,i);break;}}
                       }
      return 0;
      }

