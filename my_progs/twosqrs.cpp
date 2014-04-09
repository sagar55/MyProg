#include<stdio.h>
#include<math.h>
main()
{
long long int n,i,j,flag=0,t;
scanf("%lld",&t);
while(t--)
{
flag=0;
scanf("%lld",&n);
i=sqrt(n); 
j=sqrt(n-i*i); 
while(i>=j&&i>=0) 
{ 
if(i*i+j*j==n) 
{flag=1;
break;
} 
i--; 
j=sqrt(n-i*i); 
} 
if(flag) 
printf("Yes\n"); 
else 
printf("No\n");
}
return 0;
}
