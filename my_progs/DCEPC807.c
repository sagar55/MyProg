#include<stdio.h>
main()
{
      int j,n,t,count;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                count=0;
                for(j=n;j>0;j=j/2)
                if(j%2==1)
                count++;
                count--;
                if(count%3==0)
                printf("Bob\n");
                else
                printf("Alice\n");
                }
                return 0;
                }
