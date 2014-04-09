#include <iostream>
#include<queue>
#include <vector>
using namespace std;
int trg;
struct vertex{
vector<int> edges;
bool visited;
int d;
};
int BFS(vertex Graph[],int s){
queue<int> Q;
Q.push(s);
Graph[s].visited = true;
    while(!Q.empty()){
        int t = Q.front();
        Q.pop();
    for(int i=0;i<Graph[t].edges.size();i++){
                int u = Graph[t].edges[i];
                if(!Graph[u].visited){
                    Graph[u].visited = true;
                    Graph[u].d=Graph[t].d+1;
                    Graph[u].parent= t;
                    Q.push(u);
                }
      }
    }
    return Graph[trg].d;
}
main(){
int n,s,k,i,a,b,p=1,t;
cin >>n;
vertex Graph[(n+2)*(n+2)];
char s[101][101]
for(i=0;i<n;i++)
scanf("%s",s);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
b[i][j]=p++;
for(i=0;i<n;i++)
for(j=0;j<n;j++){
                 p=b[i][j];
                 if(a[i][j]=='0')
{
                 if(a[i+1][j]=='0'&&(i+1)<n){
    Graph[p].edges.push_back(b[i+1][j]);
    Graph[b[i+1][j]].edges.push_back(p);}
    
    if(a[i][j+1]=='0'&&(j+1)<n){
    Graph[p].edges.push_back(b[i][j+1]);
    Graph[b[i][j+1]].edges.push_back(p);}
    
    if(a[i+1][j+1]=='0'&&(i+1)<n&&(j+1)<n){
    Graph[p].edges.push_back(b[i+1][j+1]);
    Graph[b[i+1][j+1]].edges.push_back(p);}
    
    if(a[i+1][j-1]=='0'&&(i+1)<n&&(j-1)>=0){
    Graph[p].edges.push_back(b[i+1][j-1]);
    Graph[b[i+1][j-1]].edges.push_back(p);}
    
    if(a[i-1][j+1]=='0'&&(i-1)>=0&&(j+1)<n){
    Graph[p].edges.push_back(b[i-1][j+1]);
    Graph[b[i-1][j+1]].edges.push_back(p);}
    
    if(a[i-1][j-1]=='0'&&(i-1)>=0&&(j-1)>=0){
    Graph[p].edges.push_back(b[i-1][j-1]);
    Graph[b[i-1][j-1]].edges.push_back(p);}
    
    if(a[i-1][j]=='0'&&(i-1)>=0){
    Graph[p].edges.push_back(b[i-1][j]);
    Graph[b[i-1][j]].edges.push_back(p);}
    
    if(a[i][j-1]=='0'&&(j-1)>=0){
    Graph[p].edges.push_back(b[i+1][j-1]);
    Graph[b[i][j-1]].edges.push_back(p);}
    
}
for(i=1;i<=n*n; i++){
    Graph[i].visited = false;
    Graph[i].parent=0;
}
s=1;
trg=n*n;
printf("%d\n",BFS(Graph,s));
return 0;
  }


