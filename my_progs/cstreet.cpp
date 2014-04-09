#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
};
int T;
int DFS_VISIT(vertex Graph[],int s) {               
Graph[s].visited = true;
for(int i=0;i<Graph[s].edges.size();i++){
    int u = Graph[s].edges[i];
    if(!Graph[u].visited){
    DFS_VISIT(Graph,u);  }
}
}
int DFS(vertex Graph[],int n){
    int count=0;
for(int i=1;i<=n;i++)
if(!Graph[i].visited)
{  DFS_VISIT(Graph,i);
    count++;
}
return count;
}

             
main(){
int n,s,k,i,a,b,t;
cin>>t;
while(t--){
cin >>n;
vertex Graph[n+2];
cin >>k;
for(i=1;i<=k;i++){
    cin >>a>>b;
    Graph[a+1].edges.push_back(b+1);
    Graph[b+1].edges.push_back(a+1);
}
for(i=1;i<=n;i++)
    Graph[i].visited = false;
printf("%d\n",DFS(Graph,n));
}
return 0;
  }
