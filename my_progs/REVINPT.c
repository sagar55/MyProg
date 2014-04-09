#include<stdio.h>
#include<string.h>
main()
{
      char a[1025][1025];
      int i=0,j,n,b[1500];
      scanf("%d",&n);
      while((scanf("%s",a[i]))!=EOF)
      { strrev(a[i]);
                                    i++;}
    while(i--)
    {        j=n;while(j--)
              printf("%s ",a[i]);
              }
      getch();
      }
                               
