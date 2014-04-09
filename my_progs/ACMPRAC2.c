#include<stdio.h>
#include<string.h>
main()
{
      char a[10001];
      int b[10001],n,t,i,j,f,l;
      scanf("%d",&t);
      while(t--)
      {
      scanf("%d%s",&n,a);
      l=strlen(a);
      j=0;f=0;
      for(i=1;i<l;i++)
      { if(a[i]!=a[i-1])
      {
      b[j++]=i-f;
      f=i;
      }
      }
      b[j++]=i-f;
      for(i=0;i<j;i++)
      printf("%d\n",b[i]);
      }
      return 0;
      }
        
      
      
