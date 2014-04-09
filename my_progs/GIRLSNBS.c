#include<stdio.h>
main()
{
      int m,n,i;
      scanf("%d%d",&m,&n);
      while(m!=-1&&n!=-1)
      {
                         if(m>n)
        {i=m/(n+1);
        if(m%(n+1))
        i++;
        }
        else
        {i=n/(m+1);
        if(n%(m+1))
        i++;
        }
        printf("%d\n",i);
        scanf("%d%d",&m,&n);
        }
        return 0;
        }
        
