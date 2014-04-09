#include<iostream>
#include<stdio.h>
using namespace std;
#include<vector>
#define MOD  1000000007
vector<long long> f(1002,1);
vector<long long> f1(1002,1);
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

/* 	Modular Multiplicative Inverse
	Using Euler's Theorem
	a^(phi(m)) = 1 (mod m)
	a^(-1) = a^(m-2) (mod m) */
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
long long fun1(long long p)
{

 f1.push_back(1);f1.push_back(1);f1.push_back(1);
	for (long long i=3; i<=p;i++)
		f1[i]= (f1[i-1]*i) % MOD;
		
}
long long C(long long n,long long r)
{

	return (f1[n]*((InverseEuler(f[r])*InverseEuler(f[n-r])) % MOD)) % MOD;
}
main()
{
	long long n,r,p,t,t1,t2,i,tt;
	scanf("%lld",&t);
	fun(1000);
	fun1(1000);
	while (t--)
	{
	    scanf("%lld",&n);
	    for(i=0;i<n;i++)
        scanf("%lld",&tt);
        if(n%2)
        printf("%lld\n",power(2,n-1));
        else{
            r=n/2;
            //printf("hi\n");
                    t1=C(n,r);
        t2=power(2,n-1);
       // printf("%lld %lld\n",t1,t2);
        if(t1>t2)
            t2+=MOD;
        p=(t2-t1)%MOD;
		printf("%lld\n",p);
        }
	}
}
