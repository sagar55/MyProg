#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef long long LL; 
#define s(n)					scanf("%d",&n)
#define sl(n) 					scanf("%lld",&n)
#define sf(n) 					scanf("%lf",&n)
#define ss(n) 					scanf("%s",n)
#define sc(n)                   {char temp[4]; ss(temp); n=temp[0];}
#define INF						(int)1e9
#define LINF					(LL)1e18
#define swap(a,b)                int temp; temp=a;a=b;b=temp;
#define EPS						1e-9
#define maX(a,b)				((a)>(b)?(a):(b))
#define miN(a,b)				((a)<(b)?(a):(b))
#define abS(x)					((x)<0?-(x):(x))
#define FOR(i,a,b)				for(int i=a;i<b;i++)
#define FOR1(i,a,b)				for(int i=a;i<=b;i++)
#define FORREV(k,a,b)                           for(int i=a;i>b;i--)
#define REP(i,n)				FOR(i,0,n)
#define REP1(i,n)        		        FOR1(i,1,n)
#define FOREACH(v,c)            for( typeof((c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define CASEN(n)                int cas=1;while(scanf("%d",&n)!=EOF)
#define CASE(T)                 int T;scanf("%d",&T);while(T--)
#define mp						make_pair
#define FF						first
#define SS						second
#define tri(a,b,c)				mp(a,mp(b,c))
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
/*	math */
#define two(X) 					(1<<(X))  // 2^x
#define twoL(X) 				(((LL)(1))<<(X))
#define MOD						1000000007
template<class T> inline T lowbit(T n){return (n^(n-1))&n;}
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}
template<class T> string toString(T n){ostringstream ost;ost<<n;ost.flush();return ost.str();}
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toInt(
LL toLL(string s){LL r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toLL(
double toDouble(string s){double r=0;istringstream sin(s);sin>>r;return r;}//NOTES:toDouble(
template<class T> void stoa(string s,int n,T A[]){n=0;istringstream sin(s);for(T v;sin>>v;A[n++]=v);}//NOTES:stoa(
template<class T> void atos(int n,T A[],string &s){ostringstream sout;for(int i=0;i<n;i++){if(i>0)sout<<' ';sout<<A[i];}s=sout.str();}//NOTES:atos(
int gcd(int i,int j)
{
   if(j==0)
    return i;
    else
      return gcd(j,i%j);
    }
LL power(LL x,LL n)
  {
  LL result=1;
  while(n>0)
    { 
        if(n%2==1)
      result=(result*x)%MOD;
      x=(x*x)%MOD;
      n/=2;
}
  return result;
}

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
}		//vector< vector<int> > v; sort(all(v),cmp);

////End of Template
int solve(int x,int y,int p,int q,int n,int m,char a[15][15])
{
int maxR=0,maxC=0,ans=1,cal=1,i,j;
int stry=y;
int strq=q;
int strx=x;
int strp=p;
//printf("%d %d %d %d %d %d\n",x,y,p,q,n,m);
while(y<m&&q<m&&a[x][y]==a[p][q]){
maxC++;
y++;
q++;
}
y=stry;
q=strq;
while(x<n&&p<n&&a[x][y]==a[p][q])
{
maxR++;
x++;
p++;
}
x=strx;
p=strp;
p++;
q++;
//printf("%d %d?\n",maxR,maxC);
ans=max(maxR,maxC);
for(i=x+1;i<x+maxR;i++,p++)
{
int cc=1;
for(j=y+1,q=strq+1;j<y+maxC;j++,cc++,q++){
//printf("%d %d %d %d %d pls\n",i,j,p,q,maxR);
if(a[i][j]!=a[p][q])
{
maxC=cc;
break;
}
}
cal=(i-x+1)*(cc); 
ans=max(cal,ans);
//printf("%d :: %d<>%d\n",maxC,cal,ans);
}
return ans;
}

main()
{
CASE(T){
//printf("hiiiiiiii\n");
int hash[27][1000],n,m,i,j,k,l,cnt,ans=0;
char a[15][15];
memset(hash,0,sizeof hash);
s(n);
s(m);
REP(i,n){
char temp[100];
scanf("%s",temp);
for(j=0;j<m;j++)
a[i][j]=temp[j];
}
//printf("hi\n");
for(i=0;i<26;i++)
{
l=1;
cnt=0;
for(j=0;j<n;j++)
{
for(k=0;k<m;k++)
{
if(a[j][k]==i+97)
{
hash[i][l]=j;
hash[i][l+1]=k;
l+=2;
cnt++;
}
}
}
hash[i][0]=cnt;
}
//printf("%d{}{}\n",hash[0][1],hash[0][2]);
for(int i=0;i<26;i++){
int p=0;
cnt=hash[i][0];
//printf("%d   iyrtoiwuer\n",cnt);
int o,y;
for(o=1,y=0;y<cnt;o+=2,y++)
{
for(j=1,k=0;k<cnt;j+=2,k++)
{
if(o!=j)
{
//cout<<o<<"?"<<j<<endl;
p=solve(hash[i][o],hash[i][o+1],hash[i][j],hash[i][j+1],n,m,a);
//printf("%c{{}{}{}\n",i+97);
if(p!=n*m)
ans=max(p,ans);
}
}
}
}
printf("%d\n",ans);
}
return 0;
}

