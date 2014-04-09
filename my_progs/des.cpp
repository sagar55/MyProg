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
#define p(n)                    printf("%d\n",n)
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
#define SIZE(X) ((int)(X.size()))
#define LENGTH(X) ((int)(X.length()))
#define MP(X,Y) make_pair(X,Y)
typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)
 
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
template<class T> inline T lowbit(T n){return (n^(n-1))&n;}
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}
 
#define LOCAL 1
#if LOCAL
#define Get getchar()
#else
#define Get getchar_unlocked()
#endif
int getInt() { int a=0,s=1; char c=0; while(c<33) c=Get; if(c=='-') {s=-1; c=Get;} while(c>33) {a=(a<<3)+(a<<1)+c-'0'; c=Get;} return a*s; }
 
//ENDTEMPLATE_BY_SAGAR55
struct data{
    int s;int f;int d;
};
bool my_cmp(const data& a, const data& b)
{
    if(a.d!=b.d) return a.d<b.d;
    if(a.f!=b.f) return a.f<b.f;
    return a.s>b.s;
} 
 
bool cmp(const vector<int>& a,const vector<int>& b){
  for(int i=2;i>=0;i--){
    if(a[i]<b[i])return true;
    else if(a[i]==b[i])continue;
    else return false;
  }
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
 
////////////////////////////////// main program ////////////////////////////////

int ap1[]={57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,27,19,11,3,60,52,44,36,63,55,47,39,31,23,15,7,62,54,46,38,30,22,14,6,61,53,45,37,29,21,13,5,28,20,12,4};
int ap2[]={14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55,30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};
int ap3[]={16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25};
int aip[]={58,50,42,34,26,18,10,2,60,52,44,36,28,20,12,4,62,54,46,38,30,22,14,6,64,56,48,40,32,24,16,8,57,49,41,33,25,17,9,1,59,51,43,35,27,19,11,3,61,53,45,37,29,21,13,5,63,55,47,39,31,23,15,7};
int aipinv[]={40,8,48,16,56,24,64,32,39,7,47,15,55,23,63,31,38,6,46,14,54,22,62,30,37,5,45,13,53,21,61,29,36,4,44,12,52,20,60,28,35,3,43,11,51,19,59,27,34,2,42,10,50,18,58,26,33,1,41,9,49,17,57,25};
int ex[]={32,1,2,3,4,5,4,5,6,7,8,9,8,9,10,11,12,13,12,13,14,15,16,17,16,17,18,19,20,21,20,21,22,23,24,25,24,25,26,27,28,29,28,29,30,31,32,1};
int cs[]={1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};
int s1[]={14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13};
int s2[]={15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9};
int s3[]={10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12};
int s4[]={7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14};
int s5[]={2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3};
int s6[]={12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13};
int s7[]={4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12};
int s8[]={13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11};

string pc1(string a)
{
  string ret;
  for(int i=0;i<56;i++)
    ret+=a[ap1[i]-1];
    return ret;
    
}
string pc2(string a)
{
  int l=a.size();
  string ret;
  for(int i=0;i<48;i++)
    ret+=a[ap2[i]-1];
    return ret;
}
string pc3(string a)
{
  string ret;
  for(int i=0;i<32;i++)
    ret+=a[ap3[i]-1];
    return ret;
}
string IP(string a)
{
  int l=a.size();
  string ret;
  for(int i=0;i<l;i++)
    ret+=a[aip[i]-1];
    return ret;
}
string IPinv(string a)
{
  int l=a.size();
  string ret;
  for(int i=0;i<l;i++)
    ret+=a[aipinv[i]-1];
    return ret;
}
string h2b(string a)
{
  int l=a.size();
 char v[][6]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
string ret;
for(int i=0;i<l;i++){if(a[i]>=65)ret+=v[a[i]-'A'+10];else ret+=v[a[i]-'0'];}
  return ret;
}
string lcs(string a)
{
  int l=a.size();
  string ret;
  for(int i=1;i<l;i++)
    ret+=a[i];
ret+=a[0];
    return ret;
}
string exp(string a)
{

  int l=a.size();
  string ret;
  for(int i=0;i<48;i++)
    ret+=a[ex[i]-1];
return ret;
}
string sbox(int i,int row,int col)
{
char d2b[][6]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
  if(i==1){return d2b[s1[16*row+col]];}
  else if(i==2){return d2b[s2[16*row+col]];}
  else if(i==3){return d2b[s3[16*row+col]];}
  else if(i==4){return d2b[s4[16*row+col]];}
  else if(i==5){return d2b[s5[16*row+col]];}
  else if(i==6){return d2b[s6[16*row+col]];}
  else if(i==7){return d2b[s7[16*row+col]];}
  else if(i==8){return d2b[s8[16*row+col]];}
}
string f(string a)
{
  string ret;
for(int j=0;j<48;j+=6)
{
    int row,col;
    row=a[j+5]-'0'+2*(a[j]-'0');
    col=a[j+4]-'0'+2*(a[j+3]-'0')+4*(a[j+2]-'0')+8*(a[j+1]-'0');
     ret+=sbox(j/6+1,row,col);
}
//cout<<"imp  ->"<<ret<<":::::";
//cout<<pc3(ret)<<endl;
return pc3(ret);

}
string xr(string a,string b)
{
  int l=a.size();
  string ret;
  for(int i=0;i<l;i++)
  {
    if(a[i]==b[i])ret+='0';
    else ret+='1';
  }
  //cout<<"XOR"<<"::"<<ret<<endl;
  return ret;
}
void decrypt(string msg,string key)
{
    //msg=h2b(msg);
    key=h2b(key);
int l=msg.size(),kl=key.size();
//cout<<msg<<endl<<key<<endl;
string l0,r0;
vector<string> key2;
string c,d;
key=pc1(key);
//cout<<key<<endl;

//cout<<endl;
for(int i=0;i<28;i++)c+=key[i];
  for(int i=28;i<56;i++)d+=key[i];

//cout<<c<<":"<<d<<endl;
for(int i=0;i<16;i++)
{
string c1,d1;
c1=lcs(c);d1=lcs(d);
if(cs[i]==2){c1=lcs(c1);d1=lcs(d1);}
c=c1;d=d1;
key2.push_back(pc2(c+d));

//cout<<c<<"::"<<d<<"?"<<key2[i]<<endl;

}
//cout<<endl;
msg=IP(msg);
//cout<<msg<<endl;
for(int i=0;i<l/2;i++)r0+=msg[i];
  for(int i=l/2;i<l;i++)l0+=msg[i];
  //  cout<<l0<<":::::::::::"<<r0<<endl;
    for(int i=0;i<16;i++)
    {
string l1,r1;
r1=l0;
l1=xr(r0,f(xr(key2[16-i-1],exp(l0))));
l0=l1;
r0=r1;
//cout<<l0<<":::"<<r0<<endl;
} 

string fmsg=IPinv(l0+r0);
//cout<<endl;
cout<<"decrypted->"<<fmsg<<endl;
}
void solve(string msg,string key)
{
  string strkey=key;
    msg=h2b(msg);key=h2b(key);
int l=msg.size(),kl=key.size();
//cout<<msg<<endl<<key<<endl;
string l0,r0;
vector<string> key2;
string c,d;
key=pc1(key);
//cout<<key<<endl;

//cout<<endl;
for(int i=0;i<28;i++)c+=key[i];
  for(int i=28;i<56;i++)d+=key[i];

//cout<<c<<":"<<d<<endl;
for(int i=0;i<16;i++)
{
string c1,d1;
c1=lcs(c);d1=lcs(d);
if(cs[i]==2){c1=lcs(c1);d1=lcs(d1);}
c=c1;d=d1;
key2.push_back(pc2(c+d));

//cout<<c<<"::"<<d<<"?"<<key2[i]<<endl;

}
//cout<<endl;
msg=IP(msg);
//cout<<msg<<endl;
for(int i=0;i<l/2;i++)l0+=msg[i];
  for(int i=l/2;i<l;i++)r0+=msg[i];
  //  cout<<l0<<":::::::::::"<<r0<<endl;
    for(int i=0;i<16;i++)
    {
string l1,r1;
l1=r0;
r1=xr(l0,f(xr(key2[i],exp(r0))));
l0=l1;
r0=r1;
//cout<<l0<<"?"<<r0<<endl;
} 
string fmsg=IPinv(r0+l0);
//cout<<endl;
cout<<"Encrypt->"<<fmsg<<endl;
decrypt(fmsg,strkey);
}

main()
{
    solve("0123456789ABCDEF","133457799BBCDFF1");
    return 0;
}