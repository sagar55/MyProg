#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
int parent;
};
int q=1;
int BFS(int m,int n){
    vertex Graph[n+1];
    int i,u,t,count=0,c[3000],k=0,ans,max;
    char a[51][51],p;
    int b[51][51];
    for(i=0;i<m;i++)
scanf("%s",a[i]);
    for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 {
 b[i][j]=++count;
 if(a[i][j]=='A')
   c[k++]=count;
}
for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  { 
   p=a[i][j];
   if(a[i-1][j-1]==p+1&&i-1>=0&&j-1>=0)
    Graph[b[i][j]].edges.push_back(b[i-1][j-1]);
   if(a[i-1][j]==p+1&&i-1>=0)
    Graph[b[i][j]].edges.push_back(b[i-1][j]);
   if(a[i][j-1]==p+1&&j-1>=0)
   Graph[b[i][j]].edges.push_back(b[i][j-1]);
   if(a[i+1][j+1]==p+1&&i+1<m&&j+1<n)
   Graph[b[i][j]].edges.push_back(b[i+1][j+1]);
   if(a[i+1][j]==p+1&&i+1<m)
   Graph[b[i][j]].edges.push_back(b[i+1][j]);
   if(a[i][j+1]==p+1&&j+1<n)
   Graph[b[i][j]].edges.push_back(b[i][j+1]);
   if(a[i+1][j-1]==p+1&&i+1<m&&j-1>=0)
   Graph[b[i][j]].edges.push_back(b[i+1][j-1]);
   if(a[i-1][j+1]==p+1&&i-1>=0&&j+1<n)
   Graph[b[i][j]].edges.push_back(b[i-1][j+1]);
}

for(i=1;i<=count; i++){
    Graph[i].visited = false;
     Graph[i].d=0;
}
max=0;
for(i=0;i<k;i++)
{
s=c[i];
ans=0;
queue<int> Q;
Q.push(s);
Graph[s].visited = true;
    while(!Q.empty()){
        t = Q.front();
        Q.pop();
    for(i=0;i<Graph[t].edges.size();i++){
                u = Graph[t].edges[i];
                if(!Graph[u].visited){
                    Graph[u].visited = true;
                     Graph[u].d=Graph[t].d + 1;
                     if(Graph[u].d>ans)
                     ans=Graph[u].d;
                    Q.push(u);
                }
      }
    }
    if(ans>max)
    max=ans;
}
printf("Case_%d:_%d\n",q++,ans);
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
int m,n
cin >>m>>n;
while(m!=0||n!=0){
BFS(m,n);
cin >>m>>n;
}
return 0;
  }


