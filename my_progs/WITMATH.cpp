#include<vector>
#include<stack>
#include<set>
#include<map>
#include<queue>
#include<deque>
#include<string>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<string>
 
using namespace std;
 
#define s(n)					scanf("%d",&n)
#define sl(n) 					scanf("%lld",&n)
#define sf(n) 					scanf("%lf",&n)
#define PB                      push_back
#define SS                      ({int x;scanf("%d", &x);x;})
#define SSL                     ({LL x;scanf("%lld", &x);x;})
#define SSD                     ({double x;scanf("%lf",&x);x;})
#define sc(n)                   {char temp[4]; ss(temp); n=temp[0];}
#define INF						(int)1e9
#define LINF					(long long)1e18
#define swap(a,b)                int temp; temp=a;a=b;b=temp;
#define EPS						1e-9
#define maX(a,b)				((a)>(b)?(a):(b))
#define miN(a,b)				((a)<(b)?(a):(b))
#define abS(x)					((x)<0?-(x):(x))
#define REP(i,n)				for(i=0;i<n;i++)
#define REP1(i,n)				for(int i=1;i<=n;i++)
#define FOREACH(v,c)            for( typeof((c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define CASEN(n)                int cas=1;while(scanf("%d",&n)!=EOF)
#define CASE(T)                 int T;scanf("%d ",&T);while(T--)
#define mp						make_pair
#define ff						first
#define ss       				second
#define tri(a,b,c)				mp(a,mp(b,c))
#define XX						first
#define YY						second.first
#define ZZ						second.second
#define pb						push_back
#define fill(a,v) 				memset(a,v,sizeof a)
#define pb				        push_back  
#define all(x)					x.begin(),x.end()
#define SZ(v)					((int)(v.size()))
#define SORT(v)			        sort((v).begin(),(v).end())
#define DREP(a)					sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)			(lower_bound(all(arr),ind)-arr.begin())
#define FILEI                    freopen("input.txt","r",stdin);
#define FILEO                    freopen("output.txt","w",stdout);
#define mod                      1000000007
bool prime(unsigned long long n)
{
    unsigned long long i,sqrtN=sqrt(n);
    if(n==2||n==3)
    return true;
   if(n%2==0||n%3==0) return false;
    for(i=6;i<=sqrtN; i+=6) 
        if(n%(i-1)==0||n%(i+1)==0) return false;
    return true;
}
main()
{
    CASE(T){
        unsigned long long n,i,j;
        scanf("%llu",&n);
        for(i=n;i>=2;i--)
        {
        if(prime(i))
        break;
        }
        printf("%llu\n",i);
    }
return 0;
}
