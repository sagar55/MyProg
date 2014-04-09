#include<stdio.h>
main()
{
      double n,i;
      char s[2];
      int t,p=1;
      scanf("%d",&t);
      while(t)
      {
              scanf("%lf%s",&n,s);
              if(s[0]=='k'&&s[1]=='g')
              {
                      i=n*2.2046;
                      printf("%d%c%.4lf%c%s\n",p,32,i,32,"lb");       
                       }
              else if(s[0]=='l'&&s[1]=='b')
              {
               i=n*0.4536;   
                   printf("%d%c%.4lf%c%s\n",p,32,i,32,"kg");}
              else if(s[0]=='g')
              {
                   i=n*3.7854;
                    printf("%d%c%.4lf%c%s\n",p,32,i,32,"l");
                   }
              else
              {
                  i=n*0.2642;
                  printf("%d%c%.4lf%c%s\n",p,32,i,32,"g");
                  }
                  t--;
                  p++;
                  }
                  getch();
                  }
                  
      
