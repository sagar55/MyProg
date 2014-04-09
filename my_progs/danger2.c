#include<stdio.h>
main()
{
        int i,n,m;
      char t[5];
      scanf("%s",t);
      m=(t[0]-48)*10+(t[1]-48);
      for(i=0;i<(t[3]-48);i++)
      m=m*10;
      while(m!=0){
                  n=m;
                  printf("%d\n",f(n));
                  scanf("%s",t);
      m=(t[0]-48)*10+(t[1]-48);
      for(i=0;i<(t[3]-48);i++)
      m=m*10;
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
       
       
