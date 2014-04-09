#include<stdio.h>
main()
{
      long int n,t,i,m;
      scanf("%ld",&t);
      while(t>0){
                 scanf("%ld",&n);
                 m=5;
                 i=0;
      while(m<=n)
      {
           i=i+n/m;
           m=m*5;
           }t--;
           printf("%ld\n",i);}
           getch();
           }
