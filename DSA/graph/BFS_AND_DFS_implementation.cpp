
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10000007];
void addEdge(int v, int w)
{
    adj[v].push_back(w); 
}
void BFS(int st,int n)
{
    vector<bool>vis(n+1,0);
    for(int i=0;i<=n;i++)
    vis[i]=false;
    vis[st]=true;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
       int curr=q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto it:adj[curr])
        if(!vis[it])
            {
                vis[it] = true;
                q.push(it);
            }
    }
}
unordered_map<int,bool>visited;
void DFS(int v)
{
    visited[v] = true;
    cout<<v<<" ";
    for (auto it:adj[v])
        if (!visited[it])
            DFS(it);
}
int main() 
{
    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(3, 3);
    cout<<"BFS is : "; BFS(2,4);
    cout<<endl<<"DFS is : "; DFS(2);
    return 0;
}
