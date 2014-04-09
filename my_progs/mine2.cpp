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
int d,f;
int n,**a,**b,m,av,*mines=&d,*ntsrv=&f,total,flag=1;
char S(int x, int y) {
    printf("S %d %d\n", x, y);
    fflush(stdout);
    char res;
    scanf(" %c", &res);
    return res;
}
void N(int x, int y) {
    printf("N %d %d\n", x, y);
    fflush(stdout); 
}
void nbrcnt(int i,int j)
{
    int p,q;
    for(p=i-1;p<=i+1;p++)
     for(q=j-1;q<=j+1;q++)
     if(p>=0&&q>=0&&p<n&&q<n&&!(p==i&&q==j)){
        if(a[p][q]==1)
        *mines=*mines+1;
        else if(a[p][q]==0)
        *ntsrv=*ntsrv+1;
    }
}
void nbrzero(int i,int j)
{
    int p,q;
    for(p=i-1;p<=i+1;p++)
     for(q=j-1;q<=j+1;q++)
     if(p>=0&&q>=0&&p<n&&q<n)
        a[p][q]=-1;
}
/*int chknbr(int i,int j)
{
    int p,q;
    for(p=i-1;p<=i+1;p++)
     for(q=j-1;q<=j+1;q++)
     if(p>=0&&q>=0&&p<n&&q<n&&b[p][q]>0)
     b[p][q]--;
}
  */      
  int tot()
{
   int cnt=0,i,j;
   for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   if(a[i][j]==0)
   cnt++;
   return cnt;
}     
void nbrset(int i,int j)
{
    
        int p,q;
        
        if(b[i][j]==0)
        nbrzero(i,j);
        else{ 
        for(p=i-1;p<=i+1&&flag;p++)
         for(q=j-1;q<=j+1&&flag;q++){
                 if(p>=0&&q>=0&&p<n&&q<n)
     {      if(total==m)
       break;
      
       *mines=0;
        *ntsrv=0;
       nbrcnt(i,j);
        if(*mines==b[i][j]) 
        {
         for(p=i-1;p<=i+1;p++)
     for(q=j-1;q<=j+1;q++)
     if(p>=0&&q>=0&&p<n&&q<n&&a[p][q]==0)
        a[p][q]=-1;
    break;
   }
   else if(b[i][j]-*mines==*ntsrv)
   {
    for(p=i-1;p<=i+1;p++)
     for(q=j-1;q<=j+1;q++)
     if(p>=0&&q>=0&&p<n&&q<n&&a[p][q]==0)
      { total++;  a[p][q]=1;
// cout<<p<<":"<<q<<":\n";
    //  N(p,q);
    //   chknbr(p,q);
    }
  }
  else
  {
        if(a[p][q]==0){
    char r=S(p,q);
//cout<<"infun\n";
    int t=r-'0';
   if(r=='M')
     { b[p][q]=-1;
//   cout<<p<<":"<<q<<":\n";
       a[p][q]=1;
      // N(p,q);
     //  chknbr(p,q);
       total++;
       if(total==m)
       break;
    }   
    else if(t==0)
    { nbrzero(p,q);
      b[p][q]=-1;
    }
    else
    {
        b[p][q]=t;
        a[p][q]=-1;
    }
   if(tot()<=(av-total))
    {
       //cout<<"(1:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
    flag=0; break;
    }
   }}}
}
}
//cout<<"hhii\n";
}
      
main()
{
      int i,j,p,q,c1,c2;
      scanf("%d%d%d",&n,&m,&av);
      a= (int**) malloc (sizeof(int)*n);
      b= (int**) malloc (sizeof(int)*n);
    for (i=0;i<n;i++)
    {a[i] = (int*)malloc(sizeof(int)*n);
    b[i] = (int*)malloc(sizeof(int)*n);
   }
   for (i=0;i<n;i++)
    for (j=0;j<n;j++)
    a[i][j]=0,b[i][j]=-1;
     if(tot()<=(av-total))
    { // cout<<"(2:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j); 
cout<<"Done\n";
    }
    else{
    for(p=1;p<n&&flag;p+=3)
     for(q=1;q<n&&flag;q+=3)
     {
         if(total==m)
    break;
     if(tot()<=(av-total))
    {//cout<<"(3:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
       flag=0;
    break; 
    }
    char r=S(p,q);//cout<<"infun\n";
    int t=r-'0';
   if(r=='M')
     { 
//   cout<<p<<":"<<q<<":\n";
       a[p][q]=-1;
     N(p,q);
     char r=S(p,q);
      t=r-'0';
     b[p][q]=t;
       total++;
       if(total==m)
       break;
    }   
    else
    {
        b[p][q]=t;
        a[p][q]=-1;
    }
      nbrset(p,q);
      for(i=p-1;i<p+1&&flag;i++)
       for(j=q-1;j<q+1&&flag;j++)
       if(i>=0&&j>=0&&i<n&&j<n&&!(i==p&&j==q)&&b[i][j]>0)
        {
        if(total==m)
    break;
     if(tot()<=(av-total))
    {//cout<<"(3:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
       flag=0;
    break; 
    }
//   cout<<"INwhile1\n";
    nbrset(p,q);
   }
}
if((n-1)%3==0&&flag){//cout<<"HI\n";
    q=n-1;
    for(p=1;p<n&&flag;p+=3)
    { if(total==m)
    break;
     if(tot()<=(av-total))
    {//cout<<"(3:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
       flag=0;
    break; 
    }
    int t;
    char r;
   if(b[p][q]>0||a[p][q]==1)
   {t=b[p][q];
   if(a[p][q]==1)
   r='M';
   else
   r='d';}
   else
    { r=S(p,q);//cout<<"infun\n";
     t=r-'0';}
   if(r=='M')
     { 
//   cout<<p<<":"<<q<<":\n";
       a[p][q]=-1;
     N(p,q);
     char r=S(p,q);
      t=r-'0';
     b[p][q]=t;
       total++;
       if(total==m)
       break;
    }   
    else
    {
        b[p][q]=t;
        a[p][q]=-1;
    }
      nbrset(p,q);
      for(i=p-1;i<p+1&&flag;i++)
       for(j=q-1;j<q+1&&flag;j++)
       if(i>=0&&j>=0&&i<n&&j<n&&!(i==p&&j==q)&&b[i][j]>0)
        {
        if(total==m)
    break;
     if(tot()<=(av-total))
    {//cout<<"(3:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
       flag=0;
    break; 
    }
//   cout<<"INwhile1\n";
    nbrset(p,q);
   }}
   p=n-1;
    for(q=1;q<n&&flag;q+=3)
    { 
//cout<<flag<<":"<<a[3][3]<<"\n";
if(total==m)
    break;
     if(tot()<=(av-total))
    {//cout<<"(3:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
       flag=0;
    break; 
    }
    int t;char r;
    if(b[p][q]>0||a[p][q]==1)
   {t=b[p][q];
   if(a[p][q]==1)
   r='M';
   else
   r='d';}
   else
    { r=S(p,q);//cout<<"infun\n";
    t=r-'0';}
   if(r=='M')
     { 
//   cout<<p<<":"<<q<<":\n";
       a[p][q]=-1;
     N(p,q);
     char r=S(p,q);
      t=r-'0';
     b[p][q]=t;
       total++;
       if(total==m)
       break;
    }   
    else
    {
        b[p][q]=t;
        a[p][q]=-1;
    }
      nbrset(p,q);
      for(i=p-1;i<p+1&&flag;i++)
       for(j=q-1;j<q+1&&flag;j++)
       if(i>=0&&j>=0&&i<n&&j<n&&!(i==p&&j==q)&&b[i][j]>0)
        {
        if(total==m)
    break;
     if(tot()<=(av-total))
    {//cout<<"(3:)\n"<<tot()<<":"<<total<<":\n";
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if(a[i][j]==0)
       N(i,j);
       flag=0;
    break; 
    }
// cout<<"INwhile1\n";
    nbrset(p,q);
   }
   }
   if(a[n-1][n-1]==0&&flag)
    if((av-total)>=1)
        N(n-1,n-1);
}    
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
        if(a[i][j]==1)
        N(i,j);
        cout<<"Done\n";}
//cin>>i;
       return 0;
}
     
