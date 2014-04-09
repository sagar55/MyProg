#include<stdio.h>
main()
{
      int t,c,n;
      double f;
      scanf("%d",&t);
      while(t-->0)
      {
                  scanf("%d",&n);c=n;f=0.00;
                  while(c>0)
                  {
                            f+=1.00/c;
                            c--;
                            }
                            f=f*(n*1.00);
                            printf("%.2f\n",f);
                  }
                  return 0;
      }

