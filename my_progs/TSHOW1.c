#include<stdio.h>
#include<math.h>
main()
{
      int t,i,j,k,a[15],m;
     long long int n;
     scanf("%d",&t);
     while(t-->0)
     { 
                 scanf("%lld",&n);
                 i=1;
                 while(n-pow(2,i)>0)
                           n=n-pow(2,i++);
                           while(i>0)
                           {         i--;
                                     if(n<(pow(2,i)+1))
                                     { printf("5");
                                     }
                                     else{printf("6");
                                     n=n-pow(2,i);}}
                                     printf("\n");}return 0;}


