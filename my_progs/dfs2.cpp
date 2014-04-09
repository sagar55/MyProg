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
return 0;
}

int path(vertex Graph[],int s,int t){
            if(s==t)
            cout<<s;
            else if(Graph[t].parent==0)
            cout<<"no path from "<<s<<"to"<<t<<"\n";
            else{
           path(Graph,s,Graph[t].parent);
             cout<<t;}
             return 0;
             }
             
int main(){
int n,s,k,i,a,b,t;
cin >>n;
vertex Graph[10];
cin >>k;
for(i=1;i<=k;i++){
    cin >>a>>b;
    Graph[a].edges.push_back(b);
}
for(i=1;i<=n; i++){
    Graph[i].visited = false;
    Graph[i].parent=0;
}
cin >>s>>t;
DFS(Graph,n);
path(Graph,s,t);
return 0;
  }



