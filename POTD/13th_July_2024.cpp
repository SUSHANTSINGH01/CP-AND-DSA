class Solution {
  public:
  vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        
        vector<pair<int,int>>adj[n+1];
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        vector<int>dist(n,INT_MAX);
        dist[0]=0;
        vector<int>par(n,-1);
        par[0]=0;
        vector<int>res;
        
        for(int i=0;i<m;i++){
            adj[edges[i][0]-1].push_back({edges[i][1]-1,edges[i][2]});
            adj[edges[i][1]-1].push_back({edges[i][0]-1,edges[i][2]});
        }
    
        while(!pq.empty()){
            int curr=pq.top().second;
            pq.pop();
            for(auto it:adj[curr]){
                int temp=it.first;
                int weight=it.second;
                if(dist[temp]>dist[curr]+weight){
                    dist[temp]=dist[curr]+weight;
                    par[temp]=curr;
                    pq.push({dist[temp],temp});
                }
            }
        }
        
        if(dist[n-1]==INT_MAX) 
        return {-1};
        
        int i=n-1;
        while(i!=0){
            res.push_back(i+1);
            i=par[i];
        }
        res.push_back(1);
        res.push_back(dist[n-1]);
        reverse(res.begin(),res.end());
        
        return res;
    }
};
