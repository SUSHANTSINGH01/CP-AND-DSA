

// DFS


void solve1(int i,int a,vector<int>adj[],vector<int>&vis)
{
    vis[i]=1;
    for(auto it:adj[i])
    {
        if(it!=i && vis[it]!=1)
        solve1(it,a,adj,vis);
    }
    return;
}

int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector<int>adj[200007];
    vector<int>vis(200007);
    int n=B.size();
    for(int i=0;i<n;i++)
    {
      adj[B[i][0]].push_back(B[i][1]);
      
    }
    for(int i=0;i<200007;i++)
    vis[i]=0;


    
    solve1(1,A,adj,vis);
    return vis[A]==1;

}


// BFS 


int Solution::solve(int A, vector<vector<int> > &B) 
{
    vector<int>adj[200007];
    vector<int>vis(200007);
    int n=B.size();
    
    for(int i=0;i<n;i++)
    adj[B[i][0]].push_back(B[i][1]);

    for(int i=0;i<200007;i++)
    vis[i]=0;
     
    queue<int>q;
    q.push(1);
    vis[1]=1;
    
    while(!q.empty()){
        
        int top = q.front();
        q.pop();
        
        for(auto it:adj[top]){
            
            if(vis[it]!=1){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return vis[A];
}
