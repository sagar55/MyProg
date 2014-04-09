#include<stdio.h> 
#include<math.h>
#include<stdbool.h>
int fi(int n) 
     { 
       int result = n,i; 
       for( i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) result -= result / i; 
         while (n % i == 0) n /= i; 
       } 
       if (n > 1) result -= result / n; 
       return result; 
     } 
     main()
     {
           int t,n;
           scanf("%d",&t);
while(t--)
{
          scanf("%d",&n);
printf("%d\n",fi(n));}
return 0;  
} 

