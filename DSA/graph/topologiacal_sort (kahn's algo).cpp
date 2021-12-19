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
