#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
int start;
int finish;
int parent;
};
int T;
int DFS_VISIT(vertex Graph[],int s) {               
Graph[s].visited = true;
Graph[s].start=++T;
for(int i=0;i<Graph[s].edges.size();i++){
    int u = Graph[s].edges[i];
    if(!Graph[u].visited){
    Graph[u].parent=s;
    DFS_VISIT(Graph,u);  }
}
Graph[s].finish=++T;
}
int DFS(vertex Graph[],int n){
for(int i=1;i<=n;i++)
if(!Graph[i].visited)
DFS_VISIT(Graph,i);
}

int path(vertex Graph[],int s,int t){
            if(s==t)
            cout<<s;
            else if(Graph[t].parent==0)
            cout<<"no path from "<<s<<"to"<<t<<"\n";
            else{
           path(Graph,s,Graph[t].parent);
             cout<<t;}
             }
             
main(){

      int i,j,ans1=0,ans2=0;
     //freopen("input.txt","r",stdin);
      scanf("%d",&N,&M);
                                count=0;
      for(i=0;i<N;i++)
        scanf("%s",&a[i]);
     
       for(i=0;i<N;i++)
       for(j=0;j<M;j++)
       {
            sheep=0;
            wolf=0;
            if(visit[i][j]==0){
             Maze(i,j);
            if(sheep>wolf)
            ans1+=sheep;
            else
            ans2+=wolf;
             }
             
            }
return 0;
  }



