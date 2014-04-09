#include<stdio.h>
int f(int n)
{
    if(n==0)
    return 0;
    f(n/2);
    return (printf("%d",n%2));
}
main()
{
      int t,n;
scanf("%d",&t);
      while(t){
      scanf("%d",&n);
      f(n);t--;}
      getch();
      }
    
