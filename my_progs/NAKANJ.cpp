#include<stdio.h>
#include <iostream>
#include<queue>
#include <vector>
#define N 8
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
int d;
};
int a[8][8],b[65][65];
int BFS(int s,int tar){
     vertex Graph[100];
    int i,j;
    for(i=1;i<=64;i++)
    for(j=1;j<=64;j++)
    if(b[i][j]==1)
    Graph[i].edges.push_back(j);
for(i=1;i<=64; i++){
    Graph[i].visited = false;
    Graph[i].d=0;
}
queue<int> Q;
Q.push(s);
Graph[s].visited = true;
    while(!Q.empty()&&Graph[tar].visited==false){
        int t = Q.front();
        Q.pop();
    for(i=0;i<Graph[t].edges.size();i++){
                int u = Graph[t].edges[i];
                if(!Graph[u].visited){
                    Graph[u].d=Graph[t].d + 1;
                    Graph[u].visited = true;
                    Q.push(u);
                }
      }
    }
    return Graph[tar].d;
}

    void Knight(int i,int j)
     {
     if(i-1>=1&&j-2>=1){
     b[a[i][j]][a[i-1][j-2]]=1;
     b[a[i-1][j-2]][a[i][j]]=1;}
     if(i-2>=1&&j-1>=1){
     b[a[i][j]][a[i-2][j-1]]=1;
      b[a[i-2][j-1]][a[i][j]]=1;}
     if(i+1<=N&&j-2>=1){
     b[a[i][j]][a[i+1][j-2]]=1;
      b[a[i+1][j-2]][a[i][j]]=1;}
     if(i+2<=N&&j-2>=1){
     b[a[i][j]][a[i+2][j-1]]=1;
     b[a[i+2][j-1]][a[i][j]]=1;}
     if(i-1>=1&&j+2<=N){
     b[a[i][j]][a[i-1][j+2]]=1;
     b[a[i-1][j+2]][a[i][j]]=1;}
     if(i-2>=1&&j+1<=N){
     b[a[i][j]][a[i-2][j+1]]=1;
     b[a[i-2][j+1]][a[i][j]]=1;}
     if(i+1<=N&&j+2<=N){
     b[a[i][j]][a[i+1][j+2]]=1;
     b[a[i+1][j+2]][a[i][j]]=1;}
     if(i+2<=N&&j+1<=N){
     b[a[i][j]][a[i+2][j+1]]=1;
     b[a[i+2][j+1]][a[i][j]]=1;
                     }
     }           
     
main()
{
      int i,j,s,t,count=1,tar;
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
         s=a[p[0]-96][p[1]-48];
         tar=a[q[0]-96][q[1]-48];
         printf("%d\n",BFS(s,tar));}
         return 0;
}


