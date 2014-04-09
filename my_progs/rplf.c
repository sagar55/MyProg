#include<stdio.h>
main()
{
      int n,t,i=1,j,h,k;
      char a[10];
      scanf("%d",&t);
      while(t)
      {
              scanf("%d",&n);
              k=n;
              j=k%60;
              k=k/60;
              if(k>=24)
                  k=k%24;
              if(k<15)
              h=9+k;
              else if(k==15)
              h=0;
              else
              h=k-15;
              a[0]=h/10+48;
               a[1]=h%10+48;
               a[2]=':';
               a[3]=j/10+48;
               a[4]=j%10+48;
               a[5]='\0';
              printf("Scenario #%d: %s\n\n",i,a);
              i++;
              t--;}
              getch();
              }
              
              
              
