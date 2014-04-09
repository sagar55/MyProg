#include<stdio.h>
main()
{
      long long int n,i,j=1,t,c,k,p;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&p);
                c=0;k=1;              
                i=0;
                while(i<p)
                { 
                           scanf("%lld",&n);
                           c=c+n;
                           if(n<0&&c<0)
                             {      
                                  k=k-c;
                             c=0;}
                           i++;
                           }                       
                  printf("Scenario #%lld: %lld\n\n",j,k);
                  j++;
                  }
                  return 0;
                  }
