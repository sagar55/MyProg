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
int b[300000],c[300000],a[100005],i,j;
void maketree_max(int n,int l,int h)
{
     if(l==h)
     b[n]=l;
     else
     { 
         maketree_max(n<<1,l,(l+h)>>1);
         maketree_max((n<<1)+1,((l+h)>>1)+1,h);
         if(a[b[n<<1]]>=a[b[(n<<1)+1]])
         b[n]=b[n<<1];
         else
         b[n]=b[(n<<1)+1];
         }
}
void maketree_min(int n,int l,int h)
{
     if(l==h)
     c[n]=l;
     else
     { 
         maketree_min(n<<1,l,(l+h)>>1);
         maketree_min((n<<1)+1,((l+h)>>1)+1,h);
         if(a[c[n<<1]]<a[c[(n<<1)+1]])
         c[n]=c[n<<1];
         else
         c[n]=c[(n<<1)+1];
         }
}

int Q_min(int n,int l,int h)
{
    int p,q;
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return c[n];
     p=Q_min(n<<1,l,(l+h)>>1);
     q=Q_min((n<<1)+1,((l+h)>>1)+1,h);
     if(p==0)
     return q;
     else if(q==0)
     return p;
     else if(a[p]<a[q])
    return p;
    else
    return q;
}     
int Q_max(int n,int l,int h)
{
    int p,q;
    if(i>h||j<l)
    return 0;
    if(l>=i&&h<=j)
      return b[n];
     p=Q_max(n<<1,l,(l+h)>>1);
     q=Q_max((n<<1)+1,((l+h)>>1)+1,h);
     if(p==0)
     return q;
     else if(q==0)
     return p;
     else if(a[p]>a[q])
    return p;
    else
    return q;
}     
 
main()
{
      int n,cc,dd; 
      scanf("%d",&n);
      a[0]=-1;
      for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
      maketree_max(1,1,n);
      maketree_min(1,1,n);
       CASE(T){
            double x,y,mx=0,ans=0;
            scanf("%d%d",&i,&j);
            cc=i+1;
            dd=j+1;
            i=1,j=cc-1;
            x=(double)a[Q_max(1,1,n)];
            i=dd+1,j=n;
            y=(double)a[Q_max(1,1,n)];                                                   
            mx=maX(x,y);
            i=cc,j=dd;
            x=(double)a[Q_max(1,1,n)];
            y=(double)a[Q_min(1,1,n)];
            mx=maX(mx,(x-y)/2);
            ans=y+mx;
            printf("%.1lf\n",ans);
              }
         return 0;
         }
