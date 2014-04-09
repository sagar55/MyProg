#include<stdio.h>
main()
{
      char a[50],b[]={'m','a','n','k','u'},c;
      long long int i,t,j,n;
      scanf("%lld",&t);
      while(t--)
      {
                scanf("%lld",&n);
                j=0;
                while(n>0)
                {
               a[j]=b[(n-1)%5];
               n=(n-1)/5;
               j++;
               }
               for(i=0;i<j/2;i++)
               {
               c=a[i];
               a[i]=a[j-i-1];
               a[j-i-1]=c;
               }          
                a[j]='\0';
               printf("%s\n",a);
               }
               return 0;
               }
               
              
