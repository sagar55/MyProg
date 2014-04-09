#include<stdio.h>
main()
{
      int a[1001],b[1001],n,i,j,t,count;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d",&n);
                for(i=0;i<n;i++)
                scanf("%d%d",&a[i],&b[i]);
                count=0;
                for(i=0;i<n;i++)
                      for(j=0;j<i;j++)
                    { if((a[j]<a[i]&&b[j]>b[i])||(a[j]>a[i]&&b[j]<b[i]))
                      count++;
                      }
                    printf("%d\n",count);  
                      }
                      return 0;
                      }
