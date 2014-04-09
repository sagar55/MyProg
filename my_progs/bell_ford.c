#include<stdio.h>
#include<string.h>
#include<math.h>
#define IN 99999999
int cost[1001][1001],d[1001];
min(int i,int j)
{return i<j?i:j;}
relax(int u,int v,int w)
{
if(d[v]>d[u]+w)
d[v]=d[u]+w;
}
main()
{
      int i,j,k,n,flag=0,mn;
      scanf("%d%d",&n,&k);
      for(i=1;i<=n;i++)
      {
      d[i]=IN;
      for(j=1;j<=n;j++)
      cost[i][j]=IN;
      }
      while(k--){
      scanf("%d%d",&i,&j);
      scanf("%d",&cost[i][j]);
      }
      d[1]=0;
      for(k=1;k<=n;k++)
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        relax(i,j,cost[i][j]);
      for(i=1;i<=n;i++){
          //printf("%d ",d[i]);
     for(j=1;j<=n;j++)
     if(d[j]>d[i]+cost[i][j])
     {flag=1;
     break;}}
     if(flag)
     printf("CYCLE\n");
     else{
     printf("NO CYCLE\n");
     mn=IN;
     for(k=1;k<=n;k++)
      for(i=1;i<=n;i++)
        for(j=1;j<=n;j++){
        cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
        mn=min(mn,cost[i][j]);}
        printf("%d ",mn);
        }
      getch();
      }
        /*
        5 10
1 2 6
1 5 7
2 3 5
2 4 -4
2 5 8
3 2 -2
4 3 7
4 1 2
5 3 -3
5 4 9
*/
        
      
