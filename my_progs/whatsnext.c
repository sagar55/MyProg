#include<stdio.h>
main()
{
      long long int i,j,k,n;
      scanf("%lld%lld%lld",&i,&j,&k);
      while((i!=0&&j!=0)||(i!=0&&j==0)||(i==0&&j!=0))
      {
                       if((j-i)==(k-j))
                       {
                          n=i+3*(j-i);
                          printf("AP %-3lld\n",n);
                          }
                          else{
                          n=i*(j/i)*(j/i)*(j/i);
                           printf("GP %-3lld\n",n);
                           }
                             scanf("%lld%lld%lld",&i,&j,&k);
                           }
                           return 0;
                           }
