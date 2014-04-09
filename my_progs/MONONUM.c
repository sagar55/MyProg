#include<stdio.h>
main()
{int t,n,i;
double f,g;
scanf("%d",&t);
while(t-->0)
{
            scanf("%d",&n);
            f=(n+9)/9.0;
            g=40320.0;
            for(i=1;i<=8;i++)
            g/=(n+i);
            printf("%.6f\n%f\n%f",f-g,f,g);}
                  return 0;
      }



