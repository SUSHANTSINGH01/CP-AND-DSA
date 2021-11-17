#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int
#define setbit1(x) __builtin_popcountll(x)

vector<int>s_Time;
vector<int>e_Time;
int tim=0;

void DFS(vector<int> graph[], int start, vector<bool> &vis)
{
    vis[start] = true;
    s_Time[start] = tim++;

    for(auto node : graph[start])
    if(!vis[node])
    DFS(graph, node, vis);

    e_Time[start] = tim++;
}
bool check(int x, int y)
{
    if(s_Time[x]>s_Time[y] && e_Time[x]<e_Time[y])
    return true;
    return false;
}

int main()
{
    fast;
    fast1;
    fast2;
    int n;
    cin>>n;
    
    s_Time.resize(n+1);
    e_Time.resize(n+1);
    vector<int>adj[n+1];
    
    for(int i=0;i<n-1;i++)
    {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    vector<bool>vis(n+1);
    DFS(adj, 1, vis);
    
    int q;
    cin>>q;

    while(q--)
    {

        int type, x, y;
        cin>>type>>x>>y;
         
        if(type == 0)
        {
             if(check(y, x))
             cout<<"YES"<<"\n";
             else
             cout<<"NO"<<"\n";
        }

        else
        {

            if(check(x, y))
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";

        }
    }
    return 0;
}
