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


main()
{
    FILEI;FILEO;
    CASE(T){
    LL i,j,l,cnt=1,kk,sum,N,b[105],k;
    double k2;
    char a[105],ans[105];
    scanf("%s",a);
    sl(N);
    l=strlen(a);
k=1;
double sum2;
sum=N;sum2=N;
while(sum2>0)
{
k2=pow(l,cnt);
sum2=sum2-k2;
if(sum2>0){
b[cnt]=k2;
sum=sum2;
cnt++;
}
cout<<sum<<"???"<<sum2<<",."<<k2<<endl;
}

cout<<k<<"?"<<sum<<endl;
kk=0;
j=cnt-1;
cout<<j<< "?"<<endl;
sum=N-sum;
while(j)
{
    i=(sum-1)/b[j];
    cout<<sum<<":"<<i<<endl;
    ans[kk++]=a[i];
    sum=sum%b[j];
    j--;
}
//long long x=N-sum-1;
if(!sum) sum=l;
ans[kk++]=a[sum-1];ans[kk]='\0';
printf("%s\n",ans);
}
    return 0;
}