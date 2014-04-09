#include<iostream>
#include<vector>
#define LEN 5000001
#define mod 1000000007
long long int a[5000001];
using namespace std;
int main()
{
int t;
scanf("%d",&t);
vector<bool> sieve(LEN,true);
long int i,j,k,i2,n;
for(i=3;i*i<=LEN;i+=2) {
while( sieve[i]==false )
i+=2;
j = i*(i-2);
i2 = i<<1 ;
while( ( j = i2+j ) <= LEN )
sieve[j]=false;
}
a[1]=1,a[2]=2;
j=2;
for(i=3;i<LEN;i++)
{
                  if(sieve[i] && i%2!=0)
                  j++;
                  a[i]=(a[i-1]*(long long int)j)%mod;
}
while(t--)
{
          scanf("%ld",&n);
          printf("%lld\n",a[n]);
}
}
