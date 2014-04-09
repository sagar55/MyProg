#include<stdio.h>
#include<string.h>
main()
{
      char a[1001],b[1001];
      int i,j=1,k,n;
      while((scanf("%s",a))!=EOF)
      {
      n=0;
      for(i=0;i<strlen(a);i++){
      if(a[i]=='0')
      b[i]='1';
      else
      b[i]='0';
      } 
      for(i=0;i<strlen(a);i++)
      { if(!(n%2)&&a[i]=='1')
          n++;
      else if((n%2)&&b[i]=='1')
        n++;
        }
        printf("Game #%d: %d\n",j++,n);
        }
        return 0;
        }
      
      
      
      
      
