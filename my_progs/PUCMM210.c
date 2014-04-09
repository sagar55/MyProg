#include<math.h>
#include<stdbool.h>
#define MOD  1000000003
bool q[10];
int f(int n){
    int i,j;
for(j=n,i=0;j>0;i++,j=j/2)
        q[i]=j%2;
        }
      int  mod_exp(int a,int b)
        {
                    int c=0,d=1,i;
                    f(b);
                      for(i=log2(b);i>=0;i--)
                     {
                      c=2*c;
                      d=(d*d)%MOD;
                      if(q[i])
                      {  c++;
                      d=(d*a)%MOD;
                      }
                      }
                      return d;
                      }

main()
{
      
      long long int sum=0,p,q,t,n,i;
      scanf("%lld",&t);
      while(t--)
      {scanf("%lld",&n);
    sum=(3*mod_exp(n,5)+15*mod_exp(n,4)+25*mod_exp(n,3)+15*mod_exp(n,2)+2*n)/60;
    printf("%lld\n",sum);}
      return 0;
      }
      
      
