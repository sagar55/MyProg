#include<stdio.h>
#include<math.h>
main()
{
      long long int N,D,n,t,k,s,m;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&n);
                m=n;
                k=sqrt(2*n);
                if((k*(k+1))>=2*n)
                  n=k;
                else
                n=k+1;  
                s=n*(n-1)/2;
                  if(n%2==0)  
                    {
                     N=m-s;
                                     D=n+1-N;
                              }
                              else
                              {
                                      D=m-s;
                              N=n+1-D;
                                     }
                                     printf("TERM %lld IS %lld/%lld\n",m,N,D);
                                     }
                                     return 0;
                                     }
