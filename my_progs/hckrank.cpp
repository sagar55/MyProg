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
#define REP(i,n)				for(int i=0;i<n;i++)
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
 
 
#define debugger cerr
#define debug(args...)			{mdbg,args; debugger<<endl;}
#define PRINT_CONTAINER(o,v)    {o<<"{"; FOREACH(it,v) o<<*it<<" "; return o<<"\b}";}
struct multidebug {template<typename T> multidebug& operator , (const T &v) {debugger<<v<<" "; return *this;}} mdbg;
template<class T> ostream& operator << (ostream& o,const vector<T> &v) PRINT_CONTAINER(o,v)
template<class T> ostream& operator << (ostream& o,const set<T> &v) PRINT_CONTAINER(o,v)
template<class A,class B> ostream& operator << (ostream& o,const map<A,B> &v) PRINT_CONTAINER(o,v)
template<class A,class B> ostream& operator << (ostream& o,const pair<A,B> &p) {o<<"("<<p.first<<","<<p.second<<")"; return o;}
template<class T> void debugarr(T* v,int n) {debugger<<"{"; for(int i=0;i<n;i++) debugger<<v[i]<<" "; debugger<<"\b}"<<endl;}
 
 
 
 
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
struct data{
    int i;int j;
};
bool my_cmp(const data& a, const data& b)
{
    return a.j<b.j;
}
int BS(int start,int end,struct data a[],int item)
{
    int mid,f=0;
      while(start<=end)
      {
               mid=(start+end)/2 ;
                         if(a[mid].j==item)
                         {
                           f=1;
                           break;
                         }             
                         else if(a[mid].j<item)
                         start=mid+1;
                         else
                         end=mid-1;
      }
if(f)
return a[mid].i+1;
else 
return 0;
}

void solve()
{
    int c,n,i,j,p,q;
    c=SS;
    n=SS;
    int a[n+1];
    int b[10002][2];
    memset(b,0,sizeof b);
    for(i=0;i<n;i++)
      {
       a[i]=SS;
       if(b[a[i]][0]==0)
       b[a[i]][0]=i+1;
       else if(b[a[i]][1]==0)
       b[a[i]][1]=i+1;
        }
 
    for(i=1;i<=c/2;i++)
    {
    p=i;
     q=c-i;
     if(b[p][0]&&b[q][0])
     {
     //   cout<<p<<"<>"<<b[p][0]<<endl;
     if(p==q&&b[p][1])
    { 
    cout<<b[p][0]<<" "<<b[p][1]<<endl;
     break;
    }
     else {
            if(b[p][0]<b[q][0])
      cout<<b[p][0]<<" "<<b[q][0]<<endl;
      else
      cout<<b[q][0]<<" "<<b[p][0]<<endl;
      break;
    }
}
}
}
    
main()
{
    printf("%d",-4/3);
    CASE(T)
solve();
return 0;
}
        
