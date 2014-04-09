#include<stdio.h>
#include<string.h>
main()
{
      char a[501],b[501];
      int n,i,k,j;
      scanf("%s%s",a,b);
      while(a[0]!='*')
      {
        i=0;n=0;j=strlen(a);
        while(i<j)
        {
                          k=0;
                          while(a[i]!=b[i]&&i<j)
                          {i++;
                          k++;
                          }
                          if(k>0)
                          n++;
                          i++;
                          }
                          printf("%d\n",n);
                          scanf("%s%s",a,b);
                          }
                          return 0;
                          }
                          
                          
                          
                          
