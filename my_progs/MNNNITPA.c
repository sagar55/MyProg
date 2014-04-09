#include<stdio.h>
#include<stdbool.h>
#include<math.h>
main()
{
      int n,t,i;
      bool a[1000001];
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                 for(i=1;i<=1000000;i++)
                    a[i]=0;
                  while(n--)
                {
                          scanf("%d",&i);
                          if(a[i]==0)
                          {a[i]=1;
                          printf("OK\n");
                          }
                          else
                          printf("DUPLICATE\n");
                          }
                          }
                          return 0;
                          }
