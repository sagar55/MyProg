#include <iostream>
#include<queue>
#include <vector>
#include<stdio.h>
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
                    Q.push(u);
                }
      }
    }
    return Graph[trg].d;
}
main(){
int n,src,k,i,p=1,j,t,l;
cin >>n;

char a[101][101];
int b[101][101];
for(i=0;i<n;i++)
scanf("%s",a[i]);
l=strlen(a[0]);
vertex Graph[(n+2)*(l+2)];

for(i=0;i<n;i++)
for(j=0;j<l;j++)
b[i][j]=p++;
for(i=0;i<n;i++)
for(j=0;j<l;j++){
                 p=b[i][j];
                 if(a[i][j]=='0')
{         // printf("hi %d %d %c\n",i,j,a[i][j]);
                 if((i+1)<n&&a[i+1][j]=='0'){
    Graph[p].edges.push_back(b[i+1][j]);
    Graph[b[i+1][j]].edges.push_back(p);}
    
    if((j+1)<n&&a[i][j+1]=='0'){
    Graph[p].edges.push_back(b[i][j+1]);
    Graph[b[i][j+1]].edges.push_back(p);}
    
    if((i+1)<n&&(j+1)<n&&a[i+1][j+1]=='0'){
    Graph[p].edges.push_back(b[i+1][j+1]);
    Graph[b[i+1][j+1]].edges.push_back(p);}
    
    if((i+1)<n&&(j-1)>=0&&a[i+1][j-1]=='0'){
    Graph[p].edges.push_back(b[i+1][j-1]);
    Graph[b[i+1][j-1]].edges.push_back(p);}
    
    if((i-1)>=0&&(j+1)<n&&a[i-1][j+1]=='0'){
    Graph[p].edges.push_back(b[i-1][j+1]);
    Graph[b[i-1][j+1]].edges.push_back(p);}
    
    if((i-1)>=0&&(j-1)>=0&&a[i-1][j-1]=='0'){
    Graph[p].edges.push_back(b[i-1][j-1]);
    Graph[b[i-1][j-1]].edges.push_back(p);}
    
    if((i-1)>=0&&a[i-1][j]=='0'){
    Graph[p].edges.push_back(b[i-1][j]);
    Graph[b[i-1][j]].edges.push_back(p);}
    
    if((j-1)>=0&&a[i][j-1]=='0'){
    Graph[p].edges.push_back(b[i][j-1]);
    Graph[b[i][j-1]].edges.push_back(p);}
    
}
}
for(i=1;i<=n*l; i++){
    Graph[i].visited = false;
    Graph[i].d=0;}
src=1;
trg=n*l;
printf("%d\n",BFS(Graph,src)+1);
return 0;
  }

