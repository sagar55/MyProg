#include<stdio.h>
#include<string.h>
#include<math.h>
#define IN 99999999
#define N 100001
int p;
struct vertex{
vector<int> edges;
bool visited;
};
vertex Graph[n+1];
int dijkstra(int cost[][N], int source, int target);
int dijsktra(int source,int target)
{
    int dist[N],selected[N]={0},i,m,min,start,d,j;
    for(i=1;i<=p;i++)
        dist[i] = IN;
    start = source;
    G[start].visited=1;
    dist[start] = 0;
    while(selected[target] ==0)
    {
        min = IN;
        m = 0;
        for(int j=0;j<G[start].edges.size();j+=2){
        {
           i=G[start].edges[j];
            d = dist[start]+G[start].edges[j+1];
            if(d< dist[i]&&G[i].visited==0)
                dist[i] = d;
            if(min>dist[i]&&G[i].visited==0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        G[start].visited = 1;
    }
    return dist[target];
}
main()
{
    int i,j,w,ch,co,t;
    int source, target,x,y;
     scanf("%d",&t);
     while(t--)
     {
     scanf("%d%d%d%d",&p,&edges,&source,&target);
    for(i=1;i<=p;i++)
   {  costx
    for(x=1;x<=p;x++)
    {
 scanf("%d%d",&x,&y);
 scanf("%d",&w);
    G[x].edges.push_back(y);
    G[x].edges.push_back(w);
    G[y].edges.push_back(x);
    G[y].edges.push_back(w);
        } 
    }
    co = dijsktra(cost,source,target);
    printf("%d\n",co);}
    return 0;
}
