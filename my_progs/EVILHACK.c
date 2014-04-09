#include<stdio.h>
main()
{
      int i,j,n,t;
      scanf("%d",&t);
      while(t--)
      {
          scanf("%d%d",&i,&j);
          if(i==0||j==0)
          n=0;
          else{
          if(i==1)
           n=j/2+1;
           else if(j==1)
           n=i/2+1;
           else
           { if(i>j)
             { n=i/2+1;
             n+=j/2;}
              else{
              n=j/2+1; 
             n+=i/2;
                }}}
                printf("%d\n",n);
                }
                return 0;
                }  

