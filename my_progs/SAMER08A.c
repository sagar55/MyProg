#include<stdio.h>
#include<string.h>
#include<math.h>
#define IN 99999999
#define N 505
int a[N][2],p,cost[N][N];
int dijkstra(int cost[][N], int source, int target);
int dijsktra(int cost[][N],int source,int target)
{
    int dist[N],prev[N],selected[N]={0},i,m,min,start,d,j;
    char path[N];
    for(i=1;i<=p;i++)
    {
        dist[i] = IN;
        prev[i] = -1;
    }
    start = source;
    selected[start]=1;
    dist[start] = 0;
    while(selected[target] ==0)
    {
        min = IN;
        m = 0;
        for(i=1;i<=p;i++)
        {
            d = dist[start] +cost[start][i];
            if(d< dist[i]&&selected[i]==0)
             dist[i] = d;
               
            if(min>dist[i] && selected[i]==0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        selected[start] = 1;
    printf("hi\n");
    }
    return dist[target];
}
main()
{
    int i,j,w,ch,co,t,k,n;
    int source, target,x,y;
     scanf("%d%d",&n,&k);
     while(n!=0||k!=0){
    scanf("%d%d",&source,&target);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cost[i][j] = IN;
 for(i=1;i<=k;i++){
 scanf("%d%d%d",&x,&y,&w);
 cost[x+1][y+1]=w;
}
    co = dijsktra(cost,source+1,target+1);
    printf("%d\n",co);
    scanf("%d%d",&n,&k);}
    return 0;
}
