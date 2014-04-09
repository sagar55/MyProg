#include<stdio.h>
main()
{
      long long int t,i,n,min,a[10001],j;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&n);
                for(i=0;i<n;i++)
                scanf("%lld",&a[i]);
                min=a[0];j=min;
                for(i=1;i<n;i++)
                {
                                j+=a[i];
                           if(a[i]<min)
                           {if((j/(i+1))<min)
                              {min=j/(i+1);
                           }
                              }
                              }
                              printf("%lld\n",min);
                              }
                              return 0;
                              }
                             
                                  
