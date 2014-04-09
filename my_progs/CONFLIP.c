#include<stdio.h>
main()
{
      int t,n,i,j,g;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&g);
                while(g--)
                {
                          scanf("%d%d%d",&i,&n,&j);
                          if(i==j)
                          printf("%d\n",n>>1);
                          else
                          printf("%d\n",(n+1)>>1);
                          }
                          }
                          return 0;
                          }
