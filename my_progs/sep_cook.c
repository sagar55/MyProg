#include<stdio.h>
main()
{
      int i,t,count,n,a[10001];
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                  scanf("%d",&a[i]);
                  count=1;
                  for(i=1;i<n;i++)
                {
                                  if(a[i-1]>=a[i])
                                  count++;
                                  else
                                  a[i]=a[i-1];
                                  }
                         printf("%d\n",count);
                         }
                         return 0;
                         }             
