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

#define SIZE(X) ((int)(X.size())) 
#define LENGTH(X) ((int)(X.length()))
#define CASE(T)                 int T;scanf("%d ",&T);while(T--) 
///////////////////////////    33 to 118
const int maxn=100000+5; 
const int maxm=100000+5; 
const int oo=1000000000; 

int node,nedge,src,dest; 
int head[maxn],point[maxm],next[maxm],flow[maxm],capa[maxm],cost[maxm]; 
int dist[maxn],expand[maxn],prev[maxn],edge[maxn]; 
bool changed[maxn]; 

void init(int _node,int _src,int _dest) 
{ 
  node=_node; 
  src=_src; 
  dest=_dest; 
  nedge=0; 
  for (int i=0;i<node;i++) head[i]=-1; 
} 
void addedge(int u,int v,int c,int w) 
{ 
  point[nedge]=v,capa[nedge]=c,cost[nedge]=+w,flow[nedge]=0,next[nedge]=head[u],head[u]=(nedge++); 
  point[nedge]=u,capa[nedge]=0,cost[nedge]=-w,flow[nedge]=0,next[nedge]=head[v],head[v]=(nedge++); 
}  
void ford(int &mflow,int &mcost) 
{ 
  mflow=mcost=0; 
  while(1) 
  { 
    for(int i=0;i<node;i++) 
      dist[i]=oo,prev[i]=-1,changed[i]=false; 
    dist[src]=0; 
    changed[src]=true; 
    expand[src]=oo; 
    while (1) 
    { 
      bool ok=true; 
      for (int i=0;i<node;i++) 
	  {
	  if(changed[i]) 
      { 
        changed[i]=false; 
        for (int k=head[i];k>=0;k=next[k]) 
          if (flow[k]<capa[k]&&(dist[i]+cost[k])<dist[point[k]]) 
          { 
          	dist[point[k]]=dist[i]+cost[k]; 
            changed[point[k]]=true; 
            prev[point[k]]=i; 
            edge[point[k]]=k; 
            expand[point[k]]=min(expand[i],capa[k]-flow[k]); 
            ok=false; 
          }   
    }
} 
      if (ok) break; 
    } 
    if (prev[dest]<0)
     break; 
    int d=expand[dest]; 
    mflow+=d; 
    mcost+=d*dist[dest]; 
    
    for (int k=dest;k!=src;k=prev[k]) 
    { 
      flow[edge[k]]+=d; 
      flow[edge[k]^1]-=d; 
    } 
   } 
}
   

int solve(int a[],int b[],int n) 
{
 
    init(n*2+2,n*2,n*2+1); 
    for (int i=0;i<n;i++) 
    {   
      addedge(src,i,1,0); 
      addedge(i+n,dest,1,0); 
    } 
    for(int x=0;x<n;x++)
    for(int y=0;y<n;y++)
    addedge(x,y+n,1,abs(x-y)+abs(a[x]-b[y]));
    int c1,c2; 
    ford(c1,c2); 
    //printf("%d %d\n",c1,c2);
    return c2; 
}
 
main()
{
int n,a[20],b[20];
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
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

