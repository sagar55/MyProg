#include<stdio.h>
main()
{
      int i,t,j,x,y,n;
      scanf("%d",&t);
      while(t)
      {
              scanf("%d%d",&x,&y);
              if(x==y&&x%2==0)
                  {n=2*x;
                  printf("%d\n",n);}
                  else if(x==y&&x%2!=0){
                  n=2*x-1; printf("%d\n",n);}
                 else if(x==y+2)
                  { if(x%2==0){
                   n=2*y+2;
                    printf("%d\n",n);}
                    else{
                    n=2*y+1;
                     printf("%d\n",n);}}
                    else
                     printf("No Number\n");
                     t--;
                     }
                     return 0;
                     }
               
