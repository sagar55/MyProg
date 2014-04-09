#include<stdio.h>
#define N 8
#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
int d;
};
int BFS(int s,int tar){
    vertex Graph[100];
    for(i=1;i<=64;i++)
    for(j=1;j<=64;j++)
    if(a[i][j]==1)
    Graph[i].edges.push_back(j);
for(i=1;i<=64; i++){
    Graph[i].visited = false;
    Graph[i].d=0
}
queue<int> Q;
Q.push(s);
Graph[s].visited = true;
    while(!Q.empty()){
        int t = Q.front();
        Q.pop();
    for(int i=0;i<Graph[t].edges.size();i++){
                int u = Graph[t].edges[i];
                if(!Graph[u].visited){
                    Graph[u].d=Graph[t].d+1;
                    Graph[u].visited = true;
                    Q.push(u);
                }
      }
    }
    return Graph[tar].d;
}
int a[8][8],m,n,b[65][65];

     Knight(int i,int j)
     {
     if(i-1>=1&&j-2>=1){
     b[i][a[i-1][j-2]]=1;
     b[a[i-1][j-2]][j]=1;}
     if(i-2>=1&&j-1>=1){
     b[i][a[i-2][j-1]]=1;
      b[a[i-2][j-1]][j]=1;}
     if(i+1<=N&&j-2>=1){
     b[i][a[i+1][j-2]]=1;
      b[a[i+1][j-2]][j]=1;}
     if(i+2<=N&&j-2>=1){
     b[i][a[i+2][j-1]]=1;
     b[a[i+2][j-1]][j]=1;}
     if(i-1>=1&&j+2<=N){
     b[i][a[i-1][j+2]]=1;
     b[a[i-1][j+2]][j]=1;}
     if(i-2>=1&&j+1<=N){
     b[i][a[i-2][j+1]]=1;
     b[a[i-2][j+1]][j]=1;}
     if(i+1<=N&&j+2<=N){
     b[i][a[i+1][j+2]]=1;
     b[a[i+1][j+2]][j]=1;}
     if(i+2<=N&&j+1<=N){
     b[i][a[i+2][j+1]]=1;
     b[a[i+2][j+1]][j]=1;
                     }
     }           
     
main()
{
      int i,j,s,q,count=1;
      char p[3],q[3];
      for(i=1;i<=8;i++)
       for(j=1;j<=8;j++)
         a[i][j]=count++;
         for(i=1;i<=8;i++)
           for(j=1;j<=8;j++)
         Knight(i,j);
      scanf("%d",&t);
      while(t--){
      scanf("%s%s",p,q);
     s=b[p[0]-96][p[2]];
     t=b[q[0]-96][q[2]];
     printf("%d\n",bfs(s,t));
     }
       return 0;
       }
       
      

