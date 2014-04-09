#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct vertex{
vector<int> edges;
bool visited;
int d;
};
int q=1;
int BFS(int m,int n){
    vertex Graph[3000];
    int i,j,u,t,count=0,c[3000],k=0,ans,max,s;
    char a[100][100],p;
    int b[100][100];
    for(i=0;i<m;i++)
scanf("%s",a[i]);
    for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 {
 b[i][j]=++count;
 if(a[i][j]=='A')
   c[k++]=count;
}
for(i=0;i<m;i++){
  for(j=0;j<n;j++)
  { 
   p=a[i][j];
    if(i-1>=0&&j-1>=0&&a[i-1][j-1]==p+1)
    Graph[b[i][j]].edges.push_back(b[i-1][j-1]);
   if(i-1>=0&&a[i-1][j]==p+1)
    Graph[b[i][j]].edges.push_back(b[i-1][j]);
   if(j-1>=0&&a[i][j-1]==p+1)
   Graph[b[i][j]].edges.push_back(b[i][j-1]);
   if(i+1<m&&j+1<n&&a[i+1][j+1]==p+1)
   Graph[b[i][j]].edges.push_back(b[i+1][j+1]);
   if(i+1<m&&a[i+1][j]==p+1)
   Graph[b[i][j]].edges.push_back(b[i+1][j]);
   if(j+1<n&&a[i][j+1]==p+1)
   Graph[b[i][j]].edges.push_back(b[i][j+1]);
   if(i+1<m&&j-1>=0&&a[i+1][j-1]==p+1)
   Graph[b[i][j]].edges.push_back(b[i+1][j-1]);
   if(i-1>=0&&j+1<n&&a[i-1][j+1]==p+1)
   Graph[b[i][j]].edges.push_back(b[i-1][j+1]);
}
}
max=0;

for(j=0;j<k;j++)
{
   for(i=1;i<=count; i++){
    Graph[i].visited = false;
     Graph[i].d=0;
}
s=c[j];
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
if(k==0)
printf("Case %d: %d\n",q++,max);
else
printf("Case %d: %d\n",q++,max+1);
}

main(){
int m,n;
cin >>m>>n;
while(m!=0||n!=0){
BFS(m,n);
cin >>m>>n;
}
return 0;
  }


