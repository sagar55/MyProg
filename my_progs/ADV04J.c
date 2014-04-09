#include<stdio.h>
int a[10]={0,0,0,3,3,4,4,4,4,5};
int f(int n)
{
    int j;
    if(n<10)
    return a[n];
    else
    {     
          if(n%2==0)
            n=n/2+1;
            else
            n=n/2+2;       
          if(n%2==0)
         {return 1+f(n);}
         else
         { 
             j=n;
       n=n/2+2;
       if(n%2==0)
             {return f(j);}
        else
             {return 1+f(j);}
             }
             }
             }
       
main()
{
      int n,t,i;
      scanf("%d",&t);
      while(t--)
      {
            scanf("%d",&n);
            printf("%d\n",f(n));
      }
                return 0;
                }
