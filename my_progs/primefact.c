#include<stdio.h> 
#include<math.h>
int main() 
{ 
long long int n,i;  
printf("Enter a Number:"); 
scanf("%lld",&n); 
printf("\n\nPrime Factors of %lld is: ",n); 

for(i=2;i<=n;i++) 
{ 
if(n%i==0) 
{ 
printf("%lld,",i); 
n=n/i; 
i--; 
if(n==1) 
break; 
} 
} 
getch();
}
/*
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <map>

#define maxlongint 2147483647
#define LL long long
#define pb push_back
#define mp make_pair

#define N 10000000

using namespace std;

int prime[N/2],cnt[N+10],ans[N+10];
bool check[N+10];
int n,m,x,y;

int main()
{
    int tot=0;
    for(int i=2;i<=N;i++)
    {
        if(!check[i])prime[++tot]=i;
        for(int j=1;j<=tot;j++)
        {
            if(i*prime[j]>N)break;
            check[i*prime[j]]=true;
            if(i%prime[j]==0)break;
        }
    }
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        cnt[x]++;
    }
    for(int i=1;i<=tot;i++)
        for(int j=1;j*prime[i]<=N;j++)
            ans[i]+=cnt[j*prime[i]];
    for(int i=2;i<=tot;i++)ans[i]+=ans[i-1];
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d%d",&x,&y);
        if(x>prime[tot]){printf("0\n");continue;}
        y=min(y,prime[tot]);
        int l,r,x0,y0;
        l=1,r=tot;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(x<=prime[mid])
            {
                x0=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        l=1,r=tot;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(y<prime[mid])
                r=mid-1;
            else
            {
                y0=mid;
                l=mid+1;
            }
        }
        if(y0>=x0-1)printf("%d\n",ans[y0]-ans[x0-1]);else printf("0\n");
    }
    return 0;
}
*/
/*
#include <cstdio>
#include <bitset>

using namespace std;

const int N=10000005;

bitset <N> v;
unsigned int cnt[N], nr[N];

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int n, m, i, j, x, y;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d", &x);
        cnt[x]++;
        if(x%2==0) nr[2]++;
    }
    for(i=3;i<N;i+=2)
    {
        if(!v[i])
        {
            for(j=i;j<N;j+=i)
            {
                v[j]=1;
                nr[i]+=cnt[j];
            }
            v[i]=0;
        }
    }
    for(i=1;i<N;i++) nr[i]+=nr[i-1];
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d%d", &x, &y);
        if(y>=N) y=N-1;
        if(x>=N) x=N-1;
        printf("%d\n", nr[y]-nr[x-1]);
    }
}
*/
/*******************
void Sieve(){
    for (int i = 2; i < MAX; i += 2)    sp[i] = 2;//even numbers have smallest prime factor 2
    for (LL i = 3; i < MAX; i += 2){
        if (!v[i]){
            sp[i] = i;
            for (LL j = i; (j*i) < MAX; j += 2){
                if (!v[j*i])    v[j*i] = true, sp[j*i] = i;
            }
        }
    }
}

#include <stdio.h>

int lp[10000001];
int primes[10000001];
int cnt = 0;

int f[10000001];

int main()
{
    //freopen("input", "r", stdin);

    for (int i = 2; i <= 10000000; i++) {
        if (lp[i] == 0) {
            lp[i] = i;
            primes[cnt++] = i;
        }
        for (int j = 0; j < cnt && primes[j] <= lp[i] && i * primes[j] <= 10000000; j++) {
            lp[i * primes[j]] = primes[j];
        }
    }

    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d",  &x);
        while (x > 1) {
            int t = lp[x];
            f[t]++;
            while (x%t == 0) {
                x /= t;
            }
        }
    }

    for (int i = 3; i <= 10000000; i++) {
        f[i] += f[i-1];
    }

    int m;
    scanf("%d", &m);

    while (m--) {
        int l, r;
        scanf("%d %d", &l, &r);
        if (l > 10000000) {
            printf("0\n");
        }
        else {
            if (r > 10000000)
                r = 10000000;
            printf("%d\n", f[r] - f[l-1]);
        }
    }
}
*/

