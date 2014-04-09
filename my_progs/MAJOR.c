#include<stdio.h>
main()
{
      int t,n,i,j,a[2001],flag=0,q;
      scanf("%d",&t);
      while(t--)
      {scanf("%d",&n);
      q=n/2;
      flag=0;
      for(i=0;i<2001;i++)
      a[i]=0;
      while(n--)
      {scanf("%d",&i);
      a[i+1000]++;
      if(a[i+1000]>q)
         {flag=1;
         j=i; 
        }
         }
         if(flag==0)
         printf("NO\n");
         else
         printf("YES %d\n",j);
         }
         return 0;
         }
