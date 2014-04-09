#include<stdio.h>
main()
{
      long long int i,j,n,m,sum,k;
      scanf("%lld%lld",&n,&m);
      while(n!=-1&&m!=-1)
      {
                         
                         sum=0;
                            k=n;
                         for(i=0;i<n;i++)
                           {      
                             scanf("%lld",&j);
                             sum=sum+j*k;
                             k--;
                             }
                           sum=sum*m;
                           printf("%lld\n",sum);
                             scanf("%lld%lld",&n,&m);
                             }
                             getch();     
                           }
