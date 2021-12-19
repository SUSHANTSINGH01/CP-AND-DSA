// BFS solution : 

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int n=numCourses;
        vector<int>adj[n];
        vector<int>degree(n,0);
         vector<int>ans;
        queue<int>q;
        
       
        for(int i =0; i< prerequisites.size(); i++ )
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        
        for(int i =0; i < prerequisites.size(); i++)
        degree[prerequisites[i][0]]++;
            
         for(int i=0;i<degree.size();i++)
        if(degree[i] == 0)
        q.push(i);
        while(!q.empty())
        {
           int temp=q.front();
            q.pop();
            for(auto it : adj[temp])
            {
                 degree[it]--;
                 if(degree[it] == 0)
                 q.push(it);
            }
            ans.push_back(temp);
        }
        if (ans.size()!=n)
        ans.clear();
        return ans;
    }
};


// DFS solution : 

class Solution{
    public:
    bool cyc_detect(unordered_map<int,vector<int>>& adj, int u, vector<int>& vis, stack<int>& st)
    {
        vis[u]=1;
        for(auto v:adj[u])
        {
            if(vis[v]==1 || (vis[v]==0 && cyc_detect(adj,v,vis,st)))
            return true;
        }
        vis[u]=2;
        st.push(u);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)
    {
        unordered_map<int,vector<int>>adj;
        vector<int>ans;
        
        for(int i=0;i<prerequisites.size();i++)
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        
        vector<int>vis(numCourses,0);
        stack<int>st;
        
        for(int i=0;i<numCourses;i++)
        {
            if(vis[i]==0)
            {
                if(cyc_detect(adj,i,vis,st))
                return {};
            }
        } 
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};
