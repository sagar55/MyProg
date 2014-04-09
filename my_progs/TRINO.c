#include<stdio.h>
main()
{
      int i,j,t,n,x,y;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&i,&j);
                if(i==1||j==1)
                n=0;
                else{
                     if(i%2!=0||j%2!=0)
                     {
                     if(i%2!=0) x=j*(i/2);
                     if(j%2!=0) y=i*(j/2);
                     if(i%2!=0&&j%2!=0)
                     n=x>y?y:x;
                     if(i%2!=0)
                     n=x;
                     else
                     n=y;
                     }
                     else
                 n=i*(j/2);
                 }
                printf("%d\n",n);
                }
                return 0;
                }
