#include<stdio.h>
#include<string.h>
main()
{
      int count=0,t,p,q,r,i,l,f;
      char s[1000];
      scanf("%d",&t);
      while(t)
      {
              p=0;q=0;r=0;f=0;
              gets(s);
              l=strlen(s);
              i=l-1;
              while(s[i]>=48&&s[i]<=57&&s[i]!=32)
              {
               if(s[i]==51)
               p++;
               else if(s[i]==53)
               q++;
               else if(s[i]==56)
               r++;
               else{
                    f=1;
                    break;
               }
               i--;}
               if(r>=q&&q>=p&&f!=1)
                count++;
                t--;}
                printf("%d",count);
                getch();
                }
                                   
              
