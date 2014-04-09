#include<stdio.h>
#include<string.h>
main()
{
      int t,i,n,p=1,l;
      char c[81];
      scanf("%d",&t);
      while(t)
      {
              scanf("%d",&n);
              scanf("%s",c);
              l=strlen(c);
               for(i=n-1;i<=l;i++)
             c[i]=c[i+1];
             printf("%d%c%s\n",p++,32,c);
           t--;
           }
           getch();
           }
