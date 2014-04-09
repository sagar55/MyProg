#include<stdio.h>
#include<string.h>
main()
{
      int t,i,j,n;
      char s[101];
      scanf("%d",&t);
      while(t--){
     scanf("%s",s);
      n=strlen(s);
      for(i=0,j=n-1;i<n/2;i++,j--)
      {
                        if(s[i]==s[j])
                           continue;
                        else
                              break;
      }
      if(i==n/2)
         printf("YES\n");
         else
          printf("NO\n");
          }
          return 0;
          }
