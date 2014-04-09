#include<stdio.h>
#define pi 3.14159265358979
#define e 2.718281828459045 
main()
{
      unsigned long long int i,t,m;
      double a;
      scanf("%llu",&t);
      while(t--)
      {
                scanf("%llu",&m);
                if(m<4)printf("1\n");
                else{
                a=log10(2*pi*m)/2.0+m*log10(m/e);
                i=ceil(a);
                printf("%llu\n",i);}
                }
                return 0;
      }

