#include<stdio.h>
main()
{
      long long int n,j;
      while(scanf("%lld",&n)!=EOF)
      {
                                   j=n%9; 
                                  printf("%lld\n",81*(n/9)+j*j);
                                  }
                                  return 0;
                                  }
         
