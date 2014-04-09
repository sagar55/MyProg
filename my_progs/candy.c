#include<stdio.h>
main()
{
      long long int sum,n,t,i,count;
      char s[100],c;
      scanf("%d%c%c",&t,&c,&c);
      while(t)
      {
              sum=0;
              count=0;
              scanf("%s",s);
              while(s[0]!='\n'){
                                printf("%s",s);
                                n=0;
              for(i=0;s[i]!='\0';i++)
              n=n*10+(s[i]-48);
                         count++;
                             sum=sum+n;
              scanf("%s",s);
              }
              if(sum%count==0)
              printf("YES\n");
              else
                            printf("NO\n");
                            t--;
                            }
                            getch();
                            }
              
