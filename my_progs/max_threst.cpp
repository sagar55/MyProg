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
#define ss(n) 					scanf("%s",n)
#define sc(n)                   {char temp[4]; ss(temp); n=temp[0];}
#define INF						(int)1e9
#define LINF					(long long)1e18
#define swap(a,b)                int temp; temp=a;a=b;b=temp;
#define EPS						1e-9
#define maX(a,b)				((a)>(b)?(a):(b))
#define miN(a,b)				((a)<(b)?(a):(b))
#define abS(x)					((x)<0?-(x):(x))
#define FOR(i,a,b)				for(int i=a;i<b;i++)
#define FORREV(k,a,b)           for(int i=a;i>b;i--)
#define REP(i,n)				FOR(i,0,n)
#define FOREACH(v,c)            for( typeof((c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define CASEN(n)                int cas=1;while(scanf("%d",&n)!=EOF)
#define CASE(T)                 int T;scanf("%d ",&T);while(T--)
#define mp						make_pair
#define FF						first
#define SS						second
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

int m[100000000];
main(){
     int w,h,n,t,p,x,y;
     memset(m,-1,sizeof m);
     long long int ans;
     scanf("%d%d%d",&w,&h,&n);
     ans=h*w;
     while(n--)
     {
     scanf("%d%d",&x,&y);
     if(m[x]!=y)
     {  
                         m[x]=y;
       ans--;
       }
     if((x-1)>=0&&(y-1)>=0&&m[x-1]!=(y-1))
     {                                     
                
     ans--;
     }
     if(x-1>=0&&y>=0&&m[x-1]!=y)
     {m[x-1]=y;
     ans--;
   //  printf("%d %d::\n",x-1,y);
     }
     if(x>=0&&y-1>=0&&m[x]!=y-1)
     {m[x]=y-1;
     ans--;
 //    printf("%d %d:::\n",x,y-1);
     }
     if(x-1>=0&&y+1<h&&m[x-1]!=y+1)
     {m[x-1]=y+1;
     ans--;
   //  printf("%d %d::::\n",x-1,y+1);
     }
     if(x+1<w&&y-1>=0&&m[x+1]!=y-1)
     {m[x+1]=y-1;
     ans--;
 //    printf("%d %d::::::\n",x+1,y-1);
     }
     if(x-2>=0&&y>=0&&m[x-2]!=y)
     {m[x-2]=y;
     ans--;
  //   printf("%d %d:::::::\n",x-2,y);
     }
     if(x>=0&&y-2>=0&&m[x]!=y-2)
     {m[x]=y-2;
     ans--;
  //   printf("%d %d::::::::\n",x,y-2);
     }
     if(x+1<w&&y+1<h&&m[x+1]!=y+1)
     {m[x+1]=y+1;
     ans--;
    // printf("%d %d:::::::::\n",x+1,y+1);
     }
     if(x<w&&y+1<h&&m[x]!=y+1)
     {m[x]=y+1;
     ans--;
  //   printf("%d %d::::::::::\n",x,y+1);
     }
     if(x+1<w&&y<h&&m[x+1]!=y)
     {m[x+1]=y;
     ans--;
    // printf("%d %d:::::::::::\n",x+1,y);
     }
     if(x+2<w&&y<h&&m[x+2]!=y)
     {m[x+2]=y;
     ans--;
  //   printf("%d %d::::::::::::\n",x+2,y);
     }
     if(x<w&&y+2<h&&m[x]!=y+2)
     {
     m[x]=y+2;
     ans--;
  //   printf("%d %d:::::::::::::\n",x,y+2);
     }
     }
     printf("%lld\n",ans);

return 0;
  }



