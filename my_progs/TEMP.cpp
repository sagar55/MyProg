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
 
#define s(n)                    scanf("%d",&n)
#define sl(n)                   scanf("%lld",&n)
#define sf(n)                   scanf("%lf",&n)
#define ss(n)                   scanf("%s",n)
#define sc(n)                   {char temp[4]; ss(temp); n=temp[0];}
#define INF                     (int)1e9
#define LINF                    (long long)1e18
#define swap(a,b)                int temp; temp=a;a=b;b=temp;
#define EPS                     1e-9
#define maX(a,b)                ((a)>(b)?(a):(b))
#define miN(a,b)                ((a)<(b)?(a):(b))
#define abS(x)                  ((x)<0?-(x):(x))
#define FOR(i,a,b)              for(int i=a;i<b;i++)
#define FORREV(k,a,b)           for(int i=a;i>b;i--)
#define REP(i,n)                FOR(i,0,n)
#define REP1(i,n)               FOR(i,1,n)
#define FOREACH(v,c)            for( typeof((c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define CASEN(n)                int cas=1;while(scanf("%d",&n)!=EOF)
#define CASE(T)                 int T;scanf("%d ",&T);while(T--)
#define mp                      make_pair
#define FF                      first
#define SS                      second
#define tri(a,b,c)              mp(a,mp(b,c))
#define XX                      first
#define YY                      second.first
#define ZZ                      second.second
#define pb                      push_back
#define fill(a,v)               memset(a,v,sizeof a)
#define pb                      push_back  
#define all(x)                  x.begin(),x.end()
#define SZ(v)                   ((int)(v.size()))
#define SORT(v)                 sort((v).begin(),(v).end())
#define DREP(a)                 sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)          (lower_bound(all(arr),ind)-arr.begin())
#define FILEI                    freopen("input.txt","r",stdin);
#define FILEO                    freopen("out.txt","w",stdout);
#define MOD                      1000000007
#define SIZE(X) ((int)(X.size()))//NOTES:SIZE(
#define LENGTH(X) ((int)(X.length()))//NOTES:LENGTH(
#define MP(X,Y) make_pair(X,Y)//NOTES:MP(
typedef long long int64;//NOTES:int64
typedef unsigned long long uint64;//NOTES:uint64
#define two(X) (1<<(X))//NOTES:two(
#define twoL(X) (((int64)(1))<<(X))//NOTES:twoL(
#define contain(S,X) (((S)&two(X))!=0)//NOTES:contain(
#define containL(S,X) (((S)&twoL(X))!=0)//NOTES:containL(
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}//NOTES:checkmin(
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}//NOTES:checkmax(
template<class T> inline T sqr(T x){return x*x;}//NOTES:sqr
typedef pair<int,int> ipair;//NOTES:ipair
template<class T> inline T lowbit(T n){return (n^(n-1))&n;}//NOTES:lowbit(
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}//NOTES:countbit(
//ENDTEMPLATE_BY_SAGAR55
struct data{
    int i;int j;
};
bool my_cmp(const data& a, const data& b)
{
    return a.j<b.j;
} 
 
typedef long long LL;
typedef pair<int,int> PII;
typedef pair<LL,LL> PLL;
typedef pair<int,PII> TRI;
 
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;
typedef vector<TRI> VT;
 
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VII> VVII;
typedef vector<VLL> VVLL;
typedef vector<VT> VVT;
bool cmp(const vector<int>& a,const vector<int>& b){
  for(int i=0;i<2;i++){
    if(a[i]<b[i])return true;
    else if(a[i]==b[i])continue;
    else return false;
  }
} 
#define MaxVal 5000005
int tree[MaxVal],a[1000005];
int read(int idx){
    int sum = 0;
    while (idx > 0){
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}
void update(int idx ,int val){
    while (idx <= MaxVal){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}
  main() {
    FILEI;FILEO;
            int n,m,x,y;
        s(n);s(m);
        REP1(i,n) 
        {       a[i];
            update(i,a[i]);
        }
    
            while(m--)
        {
            string s;
            cout<<"HI"<<endl;
            cin>>s;
            cin>>x>>y;
            if(s[0]=='S')
            {
                LL ans=read(y+1)-read(x+1);
                cout<<ans<<endl;
            }
            else if(s[0]=='G')
            {
                update(x+1,y); 
            }
            else
            {
                update(x+1,-1*y);
            }
        }
        return 0;
}