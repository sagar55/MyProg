#include<stdio.h>
#include<string.h>
main()
{
      char a[1001];
      int i,t,n,b,c,l;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%s",a);
                l=strlen(a);
                n=1;
                for(i=1;i<l;i++)
                {
                 b=a[i-1];
                 c=a[i];
                         if(c<b)
                         n+=c-b+26;
                         else
                         n+=c-b;
                         }
                         n+=l;
                         if(n<=(l*11))
                         printf("YES\n");
                         else
                         printf("NO\n");
                         }
                         return 0;
                         }
                   
