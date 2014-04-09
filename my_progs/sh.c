#include<stdio.h>
long long int  x=1000000007;
long long int b[2][2];
long long int a[2][2]={1,1,1,0};
long long int mult(long long int n)
{
    long long int c,d,e,f;
    if(n==1){
             b[0][0]=1;
             b[0][1]=1;
             b[1][0]=1;
             b[1][1]=0;
             return 0;
             }
    mult(n/2);
    c=(b[0][0]*b[0][0]+b[0][1]*b[1][0])%x;
    d=(b[0][0]*b[0][1]+b[0][1]*b[1][1])%x;
    e=(b[1][0]*b[0][0]+b[1][1]*b[1][0])%x;
    f=(b[1][0]*b[0][1]+b[1][1]*b[1][1])%x;
    b[0][0]=c;
    b[0][1]=d;
    b[1][0]=e;
    b[1][1]=f;
    if(n%2)
    {
            
            d=b[0][0];
            e=b[0][0];
            f=b[1][0];
            c=(b[0][0]+b[1][0])%x;
            b[0][0]=c;b[0][1]=d;b[1][0]=e;b[1][1]=f;
           }
    return 0;
}
call(long long int n)
{
mult(n);
printf("%lld\n",b[0][0]);
}
main()
{
int t;
long long int n;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
if(n==1||n==2)printf("1\n");
else call(n-1);
}
return 0; 
}
 
