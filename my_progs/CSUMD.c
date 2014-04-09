#include<stdio.h>
long long int b[10]={0,1,3};
long long int f(long long int n)
{
    if(n==1)
     return b[1];
     if(n==2)
     return b[2];
   if(n%2==0&&n>2&&b[3]!=0)
   return b[2];
   if(n%2!=0&&n>2&&b[3]!=0)
   return b[1];
   else{
    b[3]=2*(f(n-1)+f(n-2))%1000000007;
    if(n%2==0&&b[3]!=0)
    b[2]=b[3];
    else if(b[3]!=0&&n%2!=0)
    b[1]=b[3];  
       return b[3];}
    } 
main()
{
      long long int t,n;
      scanf("%lld",&t);
      while(t--){
                 scanf("%lld",&n);
                  b[1]=1;
      b[2]=3;
      b[3]=0;
      printf("%lld\n",f(n));}
      return 0;
      }
