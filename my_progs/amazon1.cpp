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
