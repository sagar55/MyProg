#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#pragma comment(linker, "/STACK:16777216")
using namespace std;

#define bit(n) (1<<(n))
#define inf 1000000000
#define eps 1e-9
#define pi 3.1415926535897932385
#define pb push_back
#define sz size()
#define mp make_pair
#define cl clear()
#define all(a) a.begin(),a.end()
#define fill(ar,val) memset(ar,val,sizeof ar)
#define MIN(a,b) if(a>(b)) a=(b)
#define MAX(a,b) if(a<(b)) a=(b)
#define sqr(x) ((x)*(x))
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

typedef vector<int> VI;
typedef pair<int,int> PII;
#ifndef ONLINE_JUDGE
typedef __int64 LL;
#else
typedef long long LL;
#endif

#define p_len 4
const int p=10000;
#define NN 100/p_len

struct num
{
	int len;
	int it[NN];
	num(int n=0)
	{
		for(len=0;n>0;n/=p) it[len++]=n%p;
	}
};

void operator+=(num &a,const num &b)
{
	int i,div=0;
	for(i=0;i<a.len || i<b.len;i++)
	{
		if(i<a.len) div+=a.it[i];
		if(i<b.len) div+=b.it[i];
		a.it[i]=div%p;
	    div/=p;
	}
	if(div>0) a.it[i++]=div;
	a.len=i;
}

void operator-=(num &a,const num &b)
{
	int i,div=0;
	for(i=0;i<a.len;i++)
	{
		div+=a.it[i]-(i<b.len?b.it[i]:0)+2*p;
		a.it[i]=div%p;
		div=div/p-2;
	}
	for(;i-->=0 && a.it[i]==0;);
	a.len=i+1;
}

num operator*(num &a,num &b)
{
	num prod(0);
	memset(prod.it,0,sizeof prod.it);
	if(b.len==0 || a.len==0) return prod;
	int i,j,div;
	for(i=0;i<a.len;i++)
	{
		if(a.it[i]>0)
		{
			div=0;
			for(j=0;j<b.len;j++)
			{
				div+=prod.it[i+j]+a.it[i]*b.it[j];
				prod.it[i+j]=div%p;
				div/=p;
			}
			if(div>0) prod.it[i+j]=div;
		}
	}
	prod.len=a.len+b.len;
	if(prod.it[prod.len-1]==0) prod.len--;
	return prod;
}

num operator*(int b,const num &a)
{
	num prod(0);
	if(b==0) return prod;
	int i,div=0;
	for(i=0;i<a.len;i++)
	{
		div+=a.it[i]*b;
		prod.it[i]=div%p;
		div/=p;
	}
	for(;div>0;div/=p) prod.it[i++]=div%p;
	prod.len=i;
	return prod;
}

void operator*=(num &a,int b)
{
	if(b==0) a.len=0; else
	{
		int i,div=0;
		for(i=0;i<a.len;i++)
		{
			div+=a.it[i]*b;
			a.it[i]=div%p;
			div/=p;
		}
		for(;div>0;div/=p) a.it[i++]=div%p;
		a.len=i;
	}
}

bool operator>(const num &a,const num &b)
{
	if(a.len!=b.len) return (a.len>b.len);
	int i;
	for(i=a.len-1;i>=0 && a.it[i]==b.it[i];i--);
	return (i>=0 && a.it[i]>b.it[i]);
}

void operator/=(num &a,int q)
{
	int c=0,i;
	for(i=a.len-1;i>=0;i--)
	{
		c=p*c+a.it[i];
		a.it[i]=c/q;
		c%=q;
	}
	for(i=a.len-1;i>=0 && a.it[i]==0;i--);
	a.len=i+1;
}

num operator%(num &a,num &b)
{
	num s,w;
	int i,j,v,vv=0,m=b.len;
	s.len=0;
	for(i=0;i<=m;i++) s.it[i]=0;
	if(b.it[m-1]<p/2)
	{
		vv=p/(b.it[m-1]+1);
		a*=vv;b*=vv;
	}
	v=b.it[m-1];
	for(i=a.len-1;i>=0;i--)
	{
		for(j=s.len;j>0;j--) s.it[j]=s.it[j-1];
		s.it[0]=a.it[i];
		for(j=s.len;j>=0 && s.it[j]==0;j--);
		s.len=j+1;
		int q=(p*s.it[m]+s.it[m-1])/v;
		if(q>=p) q=p-1;
		if(q*b>s){q--;if(q*b>s)q--;}
		w.it[i]=q;
		s-=q*b;
	}
	if(vv)
	{
		a/=vv;b/=vv;s/=vv;
	}
	for(i=a.len-1;i>=0 && w.it[i]==0;i--);
	w.len=i+1;
	return s;
}

void print(num &a)
{
	if(a.len==0) printf("0"); else
	{
		long i=a.len-1;
		printf("%d",a.it[i]);
		char s[10];
		sprintf(s,"%%0%dd",p_len);
		for(i--;i>=0;i--) printf(s,a.it[i]);
	}
	printf("\n");
}

void read(char *w,num &a)
{
	int i,n=strlen(w),m=0,p=1;
	a.len=0;
	for(i=0;i<n;i++)
	{
		m+=p*(w[n-i-1]-'0');p*=10;
		if((i+1)%p_len==0)
		{
			a.it[a.len++]=m;
			m=0;p=1;
		}
	}
	if(m>0) a.it[a.len++]=m;
}

LL inv(LL a,LL mod)
{
	LL p=1;
	LL n=mod-2;
	for(;n;)
	{
		if(n%2) p=p*a%mod;
		if(n/=2) a=a*a%mod;
	}
	return p;
}

#define N 33

int pr[5]={999999797, 999999883, 999999893, 999999929, 999999937};
char sP[111]="999999439000119681987777878599935569632510139";
char sb[5][111]={"891255727930377070161869257254483692905553889",
"918242285300306504246621749186176561868502869",
"354589316016402654728536534318329817930979371",
"129634703478975174953837103862491308021205597",
"706276284274297641872468991178325328171288692"};

LL a[N][N];
int det(int n,int p)
{
	int ans=1;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n && !a[j][i];j++);
		if(j==n) return 0;
		if(i<j) for(k=i;k<n;k++) swap(a[i][k],a[j][k]);
		ans=ans*a[i][i]%p;
		LL aii=inv(a[i][i],p);
		for(j=i+1;j<n;j++) if(a[j][i])
		{
			LL d=a[j][i]*aii%p;
			for(k=i;k<n;k++)
				a[j][k]=(a[j][k]-d*a[i][k])%p;
		}
	}
	return ans;
}

num P;
num b[5];

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
	#endif
	int T,n,i,j,k;
	read(sP,P);
	for(i=0;i<5;i++) read(sb[i],b[i]);
	for(scanf("%d",&T);T--;)
	{
		scanf("%d",&n);
		char s[N][N];
		int deg[N]={0};
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
			for(j=0;j<n;j++) deg[i]+=s[i][j]-'0';
		}
		int p;
		scanf("%d",&p);
		int u[7],v[7];
		for(k=0;k<p;k++)
		{
			scanf("%d%d",&u[k],&v[k]);
			u[k]--;
			v[k]--;
		}
		int mask;
		int r[5]={0};
		for(mask=0;mask<bit(p);mask++)
		{
			int A[N][N]={0};
			for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					A[i][j]='0'-s[i][j];
			for(i=0;i<n;i++) A[i][i]=deg[i];
			int sign=1;
			for(k=0;k<p;k++) if(mask & bit(k))
			{
				sign=-sign;
				i=u[k];
				j=v[k];
				A[i][j]++;
				A[j][i]++;
				A[i][i]--;
				A[j][j]--;
			}
			for(k=0;k<5;k++)
			{
				fill(a,0);
				for(i=0;i<n-1;i++)
					for(j=0;j<n-1;j++) a[i][j]=A[i][j];
				r[k]=(r[k]+sign*det(n-1,pr[k]))%pr[k];
			};
		}
		num ans(0);
		for(k=0;k<5;k++)
		{
			if(r[k]<0) r[k]+=pr[k];
			num cur(r[k]);
			cur=cur*b[k];
			ans+=cur;
		};
		ans=ans%P;
		print(ans);
	}
	return 0;
}
