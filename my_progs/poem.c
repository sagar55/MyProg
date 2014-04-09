#include<stdio.h>
main()
{
      int flag;
      char s[30],c,f1,f2;
      scanf("%s",s);
      while(s[0]!='*')
      {
      c=getchar();
      if(s[0]<91){ 
      f1=s[0];
      f2=s[0]+32;}
      else{
           f1=s[0];
           f2=s[0]-32;
           }
      flag=1;
      while(c!='\n')
      {
          scanf("%s",s);
          c=getchar();
          if(s[0]!=f1&&s[0]!=f2)
          {flag=0;
          }
          }
          if(flag==1)
          printf("Y\n");
          else
          printf("N\n");
           scanf("%s",s);
           }
           getch();
           }
               
