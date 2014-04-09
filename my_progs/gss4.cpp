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
 
#define MAX  1000001
using namespace std;
long long BIT[MAX];
long long  a[MAX];
int root[MAX];
void swap(int *p,int *q)
{
    int r;
    r=*p;
    *p=*q;
    *q=r;
}
void update(int x, long long v, int n) {
	while(x <= n) {
		BIT[x] += v;
		x += (x & -x);
	}
}

long long query(int x) {
	long long ret = 0;
	while(x > 0) {
		ret += BIT[x];
		x -= (x & -x);
	}
	return ret;
}

int find(int u) {
	if(u != root[u])
     root[u] = find(root[u]);
	return root[u];
}

void change(int x, int y, int n){
	int i = find(x);
	while(x<=i&&i<=y){
		if(a[i] != 1){
			update(i,-a[i],n);
			a[i]=sqrt(a[i]);
			update(i,a[i],n);
			if(a[i] == 1) root[i] = i + 1;
		}
		i = find(i + 1);
  }
}

main(){
	int n, q, i, x, y, t,j=1;
 while(scanf("%d",&n)!=EOF){
memset(BIT,0,sizeof BIT);
		for(i = 1; i <= n; i++) {
			scanf("%lld",&a[i]);
			update(i, a[i], n);
			root[i] = i;
		}
		printf("Case #%d:\n", j++);
		scanf("%d", &q);
		while(q--) {
			scanf("%d%d%d", &t, &x, &y);
			if(x > y) swap(&x,&y);
			if(t)printf("%lld\n", query(y) - query(x-1));
			else change(x, y, n);
		}
		printf("\n");
	}
	return 0;
}
