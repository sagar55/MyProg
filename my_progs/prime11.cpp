#include<stdio.h>
#include<stdbool.h>
void prime(int L,int U) {
int d=U-L+1;

bool flag[d];
memset(flag,true,sizeof (flag));//all true
for (int i=L%2;i<d;i+=2){ flag[i]=false;}//every position of even number false
for (int i=3;i<d;i+=2)
{
//if (flag[i]==true) continue;//given number is already set prime
int mod=L%i;
int t;
if(mod>0)t=i-mod;
else t=mod;
if(L/i==1||L/i==0)t+=i;
for(int j=t;j<d;j+=i){flag[j]=false;}
}

if (L<=1) flag[1-L]=false;
if (L<=2) {printf("2\n");}
for (int i=L%2?0:1;i<d;i+=2) if (flag[i]==true) printf("%d\n",L+i);

}
main()
{
      int t,n,m;
      scanf("%d",&t);
      while(t--)
      {
                scanf("%d%d",&n,&m);
                prime(n,m);
                }
                return 0;
                }
