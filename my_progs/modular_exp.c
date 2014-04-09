#include<math.h>
#include<stdbool.h>
bool q[10];
int f(int n){
    int i,j;
for(j=n,i=0;j>0;i++,j=j/2)
        q[i]=j%2;
        }
      int  mod_exp(int a,int b,int n)
        {
                    int c=0,d=1,i;
                    f(b);
                      for(i=log2(b);i>=0;i--)
                     {
                      c=2*c;
                      d=(d*d)%n;
                      if(q[i])
                      {  c++;
                      d=(d*a)%n;
                      }
                      }
                      return d;
                      }

main()
{
                      int a=2,b=4,n=7;
       printf("%d\n",mod_exp(a,b,n));
       getch();
       }
                            
