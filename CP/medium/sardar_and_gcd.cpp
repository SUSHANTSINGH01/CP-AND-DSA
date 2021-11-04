#include <bits/stdc++.h>
using namespace std;
#define md 1000000007
#define fast ios_base::sync_with_stdio(false)
#define fast1 cin.tie(0)
#define fast2 cout.tie(0)
#define ulli long long int 
long long int ans=0;
void solve(vector<vector<ulli>> & adj, vector<ulli> &grecd, ulli child,ulli par)
{
    for(auto & it:adj[child]){
        if(it == par) 
        continue;
        solve(adj,grecd,it,child);
        grecd[child] = __gcd(grecd[it],grecd[child]);
    }
}
void solve1(vector<vector<ulli>> &adj, vector<ulli> & grecd, ulli u, ulli par, ulli exc, vector<ulli> & v)
{
    ulli temp = exc;
    for(auto & to:adj[u]){
        if(to == par) continue;
        temp+=grecd[to];
    }
    ans=max(ans,temp);
    ulli nextt = __gcd(v[u],exc);
    ulli n=adj[u].size();
    if(par!=-1)
    n--;
    
    vector<ulli>pref(n+2,nextt);
    vector<ulli>post(n+2,nextt);
    ulli indexx=0;
    for(auto & it:adj[u])
    {
        if(it == par) 
        continue;
        indexx++;
        pref[indexx]=__gcd(pref[indexx],grecd[it]);
        post[indexx]=__gcd(post[indexx],grecd[it]);
    }
    for(int i=1;i<=n;i++)
    pref[i] = __gcd(pref[i],pref[i-1]);
    
    for(int i=n;i>=1;i--)
    post[i]=__gcd(post[i],post[i+1]);
    
    indexx=0;
    for(auto & it:adj[u])
    {
        if(it == par)
        continue;
        indexx++;
        ulli combine = __gcd(pref[indexx-1], post[indexx+1]);
        solve1(adj,grecd,it,u,combine,v);
    }
}

  
int main()
{
    fast;
    fast1;
    fast2;
    int t;
    cin>>t;
    while(t--)
    {
        ulli n;
        cin>>n;
        ans=0;
        vector<vector<ulli>>adj(n);
        vector<ulli>v(n);
        for(int i=0;i<n-1;i++)
        {
            ulli u,v;
            cin>>u>>v;
            u--,v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
       
       for(int i=0;i<n;i++)
       cin>>v[i];
       vector<ulli>grecd(v.begin(),v.end());
        solve(adj,grecd,0,-1);
        solve1(adj,grecd,0,-1,0,v);
        cout<<ans<<"\n";
    }
    return 0;
}
