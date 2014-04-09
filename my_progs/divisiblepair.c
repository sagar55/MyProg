#include<stdio.h>
main()
{
      int t;
      long long int n,a,b,m,count=0;
      scanf("%d",&t);
      while(t)
      {
              count=0;
              scanf("%lld%lld",&n,&m);
              if(n==1)
                {b=0;
                printf("0\n");}
                else{
              a=m;
              b=1;
               while(((a*b)<=(2*n-1)))
              { 
                                if(a*b-n<=0){
      
                                     if((a*b)%2==0)
                                  count=count+((a*b)/2)-1;
                                  else
                                   count=count+((a*b)/2); 
                                  b++;}
                                  else {  
                                        if((a*b)%2==0)
                                      count=count+((a*b)/2)-(a*b-n);
                                      else 
                                      count=count+((a*b)/2)-(a*b-n)+1;
                                      b++;
                                        }
              }
                      printf("%d\n",count);
                 }
                      t--;
                      } 
                      getch();
                      }
                      
                      
                           
                                               
                           
