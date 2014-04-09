#include<stdio.h>
#include<string.h>
#include<math.h>
#define IN 99999999
#define N 2502
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
            {
                dist[i] = d;
                prev[i] = start;
            }
            if(min>dist[i] && selected[i]==0)
            {
                min = dist[i];
                m = i;
            }
        }
        start = m;
        selected[start] = 1;
    }
    return dist[target];
}
main()
{
    int i,j,w,ch,co,t;
    int source, target,x,y;
     scanf("%d",&p);
    for(i=1;i<=p;i++)
    for(j=1;j<=p;j++)
    cost[i][j] = IN;
    for(x=1;x<=p;x++)
    {
        for(y=x+1;y<=p;y++)
        {
            printf("enter edge length between vertex %d and %d\t",x,y);
          scanf("%d",&w);
          cost [x][y] = cost[y][x] = w;
        }
    }
printf("enter source vertex\n");
scanf("%d",&source);
  printf("enter target vertex\n");
scanf("%d",&target);

 
    co = dijsktra(cost,source,target);
    printf("shortest path length is %d\n",co);
    return 0;
}
