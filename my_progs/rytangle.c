#include<stdio.h>
#include<math.h>
main()
{
      long long int a,b,c,max,flag;
      scanf("%lld%lld%lld",&a,&b,&c);
      while(a!=0&&b!=0&&c!=0)
      {
                             flag=0;
                        if(a>b&&a>c){
                          max=a;
                          if(b*b+c*c==a*a)
                          flag=1;}
                        else if(b>a&&b>c){
                             max=b;
                             if(a*a+c*c==b*b)
                          flag=1;}
                         else 
                         {
                          max=c; 
                          if(b*b+a*a==c*c)
                          flag=1; }
                          if(flag==1)
                          printf("right\n");
                          else
                             printf("wrong\n");
                   scanf("%lld%lld%lld",&a,&b,&c);
                   
                   }   
                   getch();
                   }       
