#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <list>

using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)	
#define mod 1000000007
#define MAXN 1000010

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef long long int LL;

int dp[2100][28][28];

int main(){

	int t;
	scanf("%d",&t);
	while(t--)
	{
	
		string s;
		cin>>s;
		s="#"+s;

		memset(dp,0,sizeof(dp));

		FOR(i,1,27)
			FOR(j,1,27)
				dp[0][i][j]=-mod;

		FOR(k,1,s.length())
		{
			REP(i,27)
				REP(j,27)
				{
					int x=(int)s[k]-'a'+1;

					dp[k][i][j]=max(dp[k][i][j],dp[k-1][i][j]);

					if(i<=x)
						dp[k][x][j]=max(dp[k][x][j],dp[k-1][i][j]+1);
					if(j>=x)
						dp[k][i][x]=max(dp[k][i][x],dp[k-1][i][j]+1);
				}
		}

		int ans=-mod;
		REP(i,27)
			REP(j,27)
				ans=max(ans,dp[s.length()-1][i][j]);
		
		printf("%d\n",ans);
	}
	return 0;
}
