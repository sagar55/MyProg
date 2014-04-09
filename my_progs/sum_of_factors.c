#include<stdio.h>
#include<math.h>
int main()
{  
    long long int n,t,i,sum=0,k,count;
    scanf("%lld",&t);
    while(t)
    {
            count=0;
    scanf("%lld",&n);
    if(n==1)
    printf("%lld\n",n-1);
    else{
     k =(sqrt(n));
    for(i = 2;i<=k;i++)
    {
          if (n % i == 0){
            if(i*k==n)
            {sum=sum + i ;count+=1;}
            else{count+=2;
            sum = sum + i +( n / i);}
            }
            }printf("%lld\n",sum+1);
    }sum=0;
    t--;
    }
    return 0;
}
 
