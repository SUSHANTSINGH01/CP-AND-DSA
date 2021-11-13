class Solution {
public:
  
    vector<int>adj[100005];
    void solve(int child, vector<int>&vis)
    {
        vis[child]=true;
        for(auto it:adj[child])
        {
            if(!vis[it])
            solve(it,vis);
        }
    }
    
   
    int makeConnected(int n, vector<vector<int>>& connections)
    {
         int l=connections.size();
         vector<int>vis(n,0);
       if(l<(n-1))
           return -1;
        else
        {
           
            for(int i=0;i<l;i++)
            { 
                int x=connections[i][0];
                int y=connections[i][1];
                
                adj[x].push_back(y);
                 adj[y].push_back(x);
               
            }
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(!vis[i])
                {
                    solve(i,vis);
                    count++;
                }
            }
        return count-1;
           
             
        }
    }
};
