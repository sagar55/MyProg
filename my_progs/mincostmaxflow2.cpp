#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
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
#include <ctime>
#include <cstring>

#define CASE(T)                 int T;scanf("%d ",&T);while(T--)  
#define INF 	999999
using namespace std;

///////////////////////////    WA  spoj - BABY  ///////////////////////////////////

 int minCostMaxFlow(int numVertices,int cap[][40], int cost[][40], int s, int t) {
        int res = 0;
        while (1) {
            int prev [numVertices+2];
            int dist[numVertices+2];
		// memset(dist,INF,sizeof dist);
		 for(int i=0;i<numVertices+2;i++)dist[i]=INF;
            dist[s] = 0;
            while (1) {
                bool updated = false;
                for (int i = 0; i < numVertices; ++i){
                    if (dist[i] < INF){
                        for (int j = 0; j < numVertices; ++j)
                            if (cap[i][j] > 0 && (dist[i] + cost[i][j]) < dist[j]) {
                                dist[j] = dist[i] + cost[i][j];
                                prev[j] = i;
                                updated = true;
                            }
                            }}
                if (!updated) break;
            }
              
            if (dist[t] >= INF) break;
            res += dist[t];
			int cur = t;
            while (cur != s) {
                int pr = prev[cur];
                --cap[pr][cur];
                ++cap[cur][pr];
                cur = pr;
            }
        }
        return res;
    }
int solve(int a[],int b[],int n) {
            int tp=n*2+2;
			int cost[40][40],cap[40][40]; 
			memset(cost,INF,sizeof cost);
			for(int x=0;x<40;x++)
    		for(int y=0;y<40;y++)
    		cost[x][y]=INF,cost[y][x]=INF,cap[x][y]=0,cap[y][x]=0;
            int i,j; 
            int src=tp-2,sink=tp-1; 
            for(i=0;i<n;i++){cap[src][i]=1;cap[i+n][sink]=1;cost[src][i]=0;cost[i+n][sink]=0;} 
            for(int x=0;x<n;x++)
    for(int y=0;y<n;y++)
    cap[x][y+n]=1,cost[x][y+n]=abs(x-y)+abs(a[x]-b[y]);
            return minCostMaxFlow(tp,cap,cost,src,sink); 
        } 
        
main()
{
int n,a[20],b[20];

freopen("input.txt","r",stdin);
freopen("out.txt","w",stdout);
while(1){
cin>>n;
if(!n)
break;
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
cout<<solve(a,b,n)<<endl;
}
return 0;     
}
