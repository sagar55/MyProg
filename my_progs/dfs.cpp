#include <cstdio>
#include <vector>
using namespace std;
#define N 100001

vector<int> adj[N];
int vis[N];

void dfs(int p)
{
	vis[p] = 1;
	for (int i = 0; i < adj[p].size(); ++i) 
	   if (!vis[adj[p][i]])
		dfs(adj[p][i]);

}

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n-1; ++i)
	{
		scanf("%d%d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	printf("%.10lf\n", dfs(1));
}
