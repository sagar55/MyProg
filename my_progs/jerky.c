#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
 
typedef struct {
	int a; int b; int flow; int lim;
} edge;
 
#define MF_inf 99999999
#define N (50*50*5+1)
int nin[N], nout[N];
int in[N][10], out[N][10];
int ne;
edge edges[N*4];
 
void initGraph() {
	ne=0;
	for (int i=0;i<N;i++) { nin[i]=0; nout[i]=0; }
}
 
void addEdge(int a, int b, int lim) {
	edges[ne]=(edge){a,b,0,lim};
	assert(nout[a]<10 && nin[b]<10 && ne<N*4);
	out[a][nout[a]++]=ne;
	in[b][nin[b]++]=ne;
	ne++;
}
 
int m[N];
int aug(int x, int sink, int flow, int mark) {
	if (flow<=0) return 0;
	if (m[x]==mark) return 0;
	if (x==sink) return flow;
	m[x]=mark;
	int f;
	for (int i=0;i<nout[x];i++) { // forward edge
		edge &e = edges[out[x][i]];
		if (f=aug(e.b, sink, min(flow, e.lim-e.flow), mark)) {
			e.flow+=f;
			return f;
		}
	}
	for (int i=0;i<nin[x];i++) { // backward edge
		edge &e = edges[in[x][i]];
		if (f=aug(e.a, sink, min(flow, e.flow), mark)) {
			e.flow-=f;
			return f;
		}
	}
	return 0;
}
 
int maxFlow(int source, int sink) {
	memset(m,0,sizeof(m));
	int a,f=0,mark=1;
	while (a=aug(source,sink,MF_inf,mark)) { f+=a; mark++; }
	return f;
}
 
int g[101][101];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int tests,h,w,r1,c1,r2,c2;
 
int getID(int r, int c) { return r*w+c; }
 
int main() {
	scanf("%d",&tests);
	while (tests--) {
 
		initGraph();
		scanf("%d %d",&h,&w);
		scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
		r1--; c1--; r2--; c2--;
		for (int i=0;i<h;i++) for (int j=0;j<w;j++) {
			scanf("%d",&g[i][j]);
		}
		for (int i=0;i<h;i++) {
			for (int j=0;j<w;j++) {
				vector<pair<int,int> > neigh;
				for (int d=0;d<4;d++) {
					int i2=i+dir[d][0], j2=j+dir[d][1];
					if (i2<0 || h<=i2 || j2<0 || w<=j2) continue;
					neigh.push_back(make_pair(g[i2][j2]-g[i][j]+1,getID(i2,j2)));
				}
				while (neigh.size()<4) neigh.push_back(make_pair(-1,-1));
				sort(neigh.begin(),neigh.end());
				for (int k=0;k<4;k++) {
					int dif=neigh[k].first, id=neigh[k].second, fl;
					if (dif<0) fl=0; else fl=dif;
					if (getID(i,j)==getID(r2,c2)) fl=MF_inf;
					addEdge(getID(i,j)*5+k, getID(i,j)*5+k+1, fl);
					if (id!=-1 && dif>0) {
						addEdge(id*5+4, getID(i,j)*5+k, MF_inf);
					}
				}
			}
		}
		int mf = maxFlow(getID(r1,c1)*5+4, getID(r2,c2)*5+4);
		if (mf==MF_inf) mf=-1;
		printf("%d\n",mf);
	}
	return 0;
}
 
