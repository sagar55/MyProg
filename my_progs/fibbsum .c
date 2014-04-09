//generate fibbonacci series upto nth term
#include<stdio.h>
long long int fibbR(long long int);
long long int m;
long long int b[10000]={0};
long long int x;
long long int *sum=&x;
main()
{
      int t;
      long long int a,c,n,i;
      scanf("%d",&t);
      while(t){
      scanf("%lld%lld%lld%lld",&a,&c,&n,&m);
      b[1]=a;
      b[2]=c;
      b[3]=0;
      x=b[1]+b[2];
      sum=&x;
      if(n>1)
      {fibbR(n);
           printf("%lld\n",x%m);}
           else
            printf("%lld\n",b[1]%m);
            t--;}
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
    b[3]=((fibbR(n-1))+(fibbR(n-2)));
    *sum=(*sum)%m+b[3];
    if(n%2==0&&b[3]!=0)
    b[2]=b[3];
    else if(b[3]!=0&&n%2!=0)
    b[1]=b[3];  
       return b[3];}
    
} 

