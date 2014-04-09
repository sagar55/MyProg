#include<stdio.h>
main()
{
      int flag,i,t,n;
      char a[5],c;
      scanf("%d",&t);
      n=t;
      while(t--)
      {        flag=0;
               scanf("%s",a);
       c=a[0];
                for(i=1;i<n;i++)
      { scanf("%s",a);
      if(a[0]!=c)
      flag=1;
      }
      if(flag==0)
      printf("NO\n");
      else
      printf("YES\n");
      }
      return 0;
      
      }
