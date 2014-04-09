#include<stdio.h>
#include<math.h>
int gcd(int i,int j)
      {
           if(j==0)
            return i;
            else
              return gcd(j,i%j);
              }
              
main()
{
      int i,t,j,n;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&i,&j);
                printf("%d\n",abs(i-j)/gcd(abs(i),abs(j)));
                }
                return 0;
                }
