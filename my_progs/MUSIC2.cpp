#include<stdio.h>
main()
{
      char a[10],b[10];int j=1;
      while(scanf("%s",a)!=EOF)
      {
                               scanf("%s",b);
                          if(a[1]=='#'||a[1]=='b')
                          {
                                                  if(a[1]=='#')
                                                  {a[1]='b';
                                                               if(a[0]=='G')a[0]='A';
                                                  else
                                                  a[0]++;
                                                               }
                                                  else
                                                  {
                                                      a[1]='#';
                                                      if(a[0]=='A')a[0]='G';
                                                      else a[0]--;
                                                  }printf("Case %d: %s %s\n",j,a,b);
                                                   
                                                  }
                          else printf("Case %d: UNIQUE\n",j);
                          j++; 
                             }
            return 0;
      }
