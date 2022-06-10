int Solution::solve(int A, vector<int> &B, vector<int> &C) 
{
    vector<vector<int>>adj(A+1);
    queue<int>q;
    vector<int>indegree(A+1,0);
    int c=0;
    
    for(int i=0;i<B.size();i++)
    adj[C[i]].push_back(B[i]),
    indegree[B[i]]++;
    
    
    for(int i=1;i<=A;i++)
    if(indegree[i]==0)
    q.push(i);
    
    
    while(!q.empty())
    {
        int n=q.size();
        
        while(n--)
        {
            int temp=q.front();
            q.pop();
            c++;
            for(auto it:adj[temp])
            {
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
    }
    return c==A;
}
