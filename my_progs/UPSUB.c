#include<stdio.h>
main()
{
      int ls[101],large,i,j,n,max,t;
      char a[101];
      scanf("%d",&t);
      while(t--)
      {
      scanf("%s",a);
      n=strlen(a);
       ls[0]=1;large=1;
      for(i=1;i<n;i++)
      {max=0;
      for(j=0;j<i;j++)
      { if(a[i]>=a[j]&&ls[j]>max)
        max=ls[j];   
      }
      ls[i]=1+max;
      if(large<ls[i])
       large=ls[i];
      }
      printf("%d",large);
      }
      return 0;
      }
      
