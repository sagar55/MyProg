#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int gcd(int i,int j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
main()
{  
    int t,i,min,n,m,k,count;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&m);
      count=0;
   min=gcd(n,m);
   k=sqrt(min);
    for(i = 1;i<=k;i++)
    {
         if(min%i==0)
         count+=2;
         if(i*k==min)
         count--;
    }
    printf("%d\n",count);
    }
    return 0;
}
 

