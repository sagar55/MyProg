#include<stdio.h>
main()
{
        int n,t;
      scanf("%d",&t);
      while(t--){
                scanf("%d",&n);  
                printf("%d\n",f(n));
}
return 0;
}
int f(int n)
{
      if(n==1)
      return 1;
     else if(n%2==0)
       return (2*f(n/2)-1);
       else
       return (2*f((n-1)/2)+1);
       }
       
       
