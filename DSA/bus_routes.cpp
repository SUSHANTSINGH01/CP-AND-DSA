class Solution {
public:
   
   
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        vector<vector<int>>adj(100005);
        
        if(source==target)
        return 0;
        
        int n=routes.size();
        vector<bool>vis(n);
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<routes[i].size();j++)
            adj[routes[i][j]].push_back(i);
        
        }
        
        int res=0;
        q.push(source);
       
        while(!q.empty())
        {
            int sz=q.size();
            res++;
            while(sz--)
            {
                int temp=q.front();
                q.pop();
                
                for(auto it: adj[temp])
                {
                    
                    if(vis[it]) 
                    continue;
                    vis[it]=1;
                   // cout<<it<<endl<<endl;
                    for(auto it1:routes[it])
                    {
                        q.push(it1);
                       // cout<<it1<<endl;
                        if(it1==target) 
                        return res;
                    }
                }
            }
        }
        return -1;
    }
};
