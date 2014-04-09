#include<stdio.h>
main()
{
      long int sum;
      int i,j,t,n,a[10000],count;
      scanf("%d",&t);
      while(t!=-1)
      {
                  sum=0;
                  count=0;
              for(i=0;i<t;i++)
              { scanf("%d",&a[i]);
               sum=sum+a[i];
               }
               if(sum%t==0)
              { n=sum/t; 
               for(i=0;i<t;i++)
                {if(a[i]<n)
                 count=count+n-a[i];}
                 printf("%d\n",count);
                 }
                 else
                 printf("-1\n");
                   scanf("%d",&t);
                 }
                 getch();
                 }
                 
               
