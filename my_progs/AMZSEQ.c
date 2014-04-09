#include<stdio.h>
int f(int n)
{   if(n==1)
    return 3;
    else if(n==2)
    return 7;
    else
    return 2*f(n-1)+f(n-2);}
main()
{
      int n,t;
      scanf("%d",&n);
      if(n==1)
      t=3;
    else
       t=f(n);
      printf("%d\n",t);
      getch();
      }
      
