#include<stdio.h>
main()
{
      int a[101],t,i,j,n,m,count;
      scanf("%d",&t);
      while(t--)
      {
                count=0;
                for(i=0;i<101;i++)
                a[i]=0;
                scanf("%d%d",&n,&m);
                while(n--)
                {scanf("%d%d",&i,&j);
                  a[j]+=i;
                  }
                  while(m--)
                  { scanf("%d%d",&i,&j);
                  a[j]-=i;
                  }
                  for(i=0;i<101;i++)
                  if(a[i]<0)
                  count+=a[i];
                  count*=-1;
                  printf("%d\n",count);
                  }
                  return 0;
                  }
