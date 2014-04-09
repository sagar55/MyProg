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
#define FOR(i,a,b)				for(int i=a;i<b;i++)
#define FORREV(k,a,b)           for(int i=a;i>b;i--)
#define REP(i,n)				FOR(i,0,n)
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
#include<stdio.h>
char a[251][251];
int maze[251][251],sol[251][251],temp[251][251],count,N,sheep,wolf,M;
int isSafe(int x,int y)
{
	if(x>=0 && x<N && y>=0 && y<N && !maze[x][y]&&!sol[x][y])
		return 1;
	return 0;
}

void Maze(int x,int y)
{
	static int i,j;
		if(isSafe(x,y))
		{
            if(a[x][y]=='k')
            sheep++;
            else if(a[x][y]=='v')
            wolf++;
            temp[x][y]=1;
			sol[x][y]=1;
Maze(x-1,y);
Maze(x,y-1);
Maze(x+1,y);
Maze(x,y+1);
sol[x][y]=0;
		}
}
main()
{
      int i,j,ans1=0,ans2=0;
     //freopen("input.txt","r",stdin);
      scanf("%d",&N,&M);
                                count=0;
      for(i=0;i<N;i++)
        scanf("%s",&a[i]);
        for(i=0;i<N;i++)
       for(j=0;j<M;j++)
       {
            if(a[i][j]=='#')
            maze[i][j]=1;
            else
            maze[i][j]=0;
    }
       for(i=0;i<N;i++)
       for(j=0;j<M;j++)
       {
            sheep=0;
            wolf=0;
            if(maze[i][j]==0&&temp[i][j]==0){
             Maze(i,j);
            if(sheep>wolf)
            ans1+=sheep;
            else
            ans2+=wolf;
             }
             
            }
        
        
    return 0;
      }
      



