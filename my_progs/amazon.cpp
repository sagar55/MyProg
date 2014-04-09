#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
int parent;
int d;
};
int LL[100];
insert(int index,int n)
{
    LL[index]=n;
}
int BFS(vertex Graph[],int s){
queue<int> Q;

Q.push(s);
Graph[s].visited = true;
int j=0;
insert(j,s);
    while(!Q.empty()){
        int t = Q.front();
        Q.pop();
    for(int i=0;i<Graph[t].edges.size();i++){
                int u = Graph[t].edges[i];
                if(!Graph[u].visited){
                    Graph[u].visited = true;
                    Q.push(u);
                    insert(j+1,u);
                }
      }
      j++;
    }
}
main(){
int n,s,k,i,a,b,t;
cin >>n;
vertex Graph[n+1];
cin >>k;
for(i=1;i<=k;i++){
    cin >>a>>b;
    Graph[a].edges.push_back(b);
    Graph[b].edges.push_back(a);
}
for(i=1;i<=n; i++){
    Graph[i].visited = false;
    Graph[i].parent=0;
}
cin >>s>>t;
BFS(Graph,s);
path(Graph,s,t);
return 0;
  }


