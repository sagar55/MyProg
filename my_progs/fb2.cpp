#include<iostream>
#include<stdio.h>
using namespace std;
#include<vector>
#define MOD  1000000007
vector<long long> f(10005,1);
long long power(long long x,long long n)
  {
      long long result=1;
  while(n>0)
    {
        if(n%2==1)
      result=(result*x)%MOD;
      x=(x*x)%MOD;
      n/=2;
}
  return result;
}
long long InverseEuler(long long n)
{
	return power(n,MOD-2);
}
long long fun(long long p)
{
    f.push_back(1);
    f.push_back(1);
	for (long long i=2; i<=p;i++)
		f[i]= (f[i-1]*i) % MOD;
		
}

long long C(long long n,long long r)
{

	return (f[n]*((InverseEuler(f[r])*InverseEuler(f[n-r])) % MOD)) % MOD;
}
main()
{
	long long n,k,i,j,t1,t,b[10005],a[10005],count,f=1;
//freopen("input.txt","r",stdin);
 // freopen("output1.txt","w",stdout);
	scanf("%lld",&t);
	fun(10001);
	while (t--)
	{
	   scanf("%lld%lld",&n,&k);
	   for(i=1;i<=n;i++)
	   scanf("%lld",&a[i]);
	   sort(a+1,a+n+1);
        j=1;
        b[j]=1;
        count=(a[k]*b[j])%MOD;
         j++;
        for(i=k+1;i<=n;i++)
        {
        t1=C(i,k);
        b[j]=t1;
        if(t1<b[j-1])
        t1+=MOD;
        t1=(t1-b[j-1])%MOD;
       count=(count+(t1*a[i]))%MOD;
         j++;
        }
		printf("Case #%lld: %lld\n",f++,count);
        }
	return 0;
}

