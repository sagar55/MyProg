//generate fibbonacci series upto nth term
#include<stdio.h>
long long int fibbR(long long int);
long long int m;
long long int b[10]={0,1,1};
main()
{
      int t;
      long long int a,c,n,i,sum;
      scanf("%d",&t);
      while(t){
      scanf("%lld%lld",&n,&m);
      b[1]=1;
      b[2]=2;
      b[3]=0;
           printf("%lld\n",fibbR(n));t--;}
getch();
}
long long int fibbR(long long int n)
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
    b[3]=((fibbR(n-1))+(fibbR(n-2)))%m;
    if(n%2==0&&b[3]!=0)
    b[2]=b[3];
    else if(b[3]!=0&&n%2!=0)
    b[1]=b[3];  
       return b[3];}
    
} 

