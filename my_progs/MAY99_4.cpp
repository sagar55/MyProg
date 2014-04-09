#include<stdio.h>
using namespace std;
#include<vector>
#define MOD  10000007
long long C(long long int n,long long int r)
{
	vector< vector<long long> > C(2,vector<long long> (r+1,0));

	for (long long int i=0; i<=n; i++)
	{
		for (long long int k=0; k<=r && k<=i; k++)
			if (k==0 || k==i)
				C[i&1][k] = 1;
			else
				C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%MOD;
	}
	return C[n&1][r];
}

main()
{
      long long n,t,r;
      scanf("%lld%lld",&n,&r);
      if(n-r<=0)
      printf("-1\n");
      else
      printf("%lld\n",C(n-1,n-r));
      return 0;
      }
      
      
          
