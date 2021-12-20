
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10005];
vector<bool>visited[10005];
void addEdge(int v, int w)
{
	adj[v].push_back(w); 
	adj[w].push_back(v); 
}

void printVertexCover(int V)
{
	bool visited[V];
	for (int i=0; i<V; i++)
		visited[i] = false;
	for (int u=0; u<V; u++)
    {
		if (visited[u] == false)
		{
			for (auto it:adj[u])
			{
				if (visited[it] == false)
			    {
                    visited[it] = true;
					visited[u] = true;
					break;
				}
			}
		}
	}
	for(int i=0; i<V; i++)
	if(visited[i])
	cout<<i<< " ";
}

int main()
{
	addEdge(0, 1);
	addEdge(0, 2);
	addEdge(1, 3);
	addEdge(3, 4);
	addEdge(4, 5);
	addEdge(5, 6);
	printVertexCover(7);

	return 0;
}
