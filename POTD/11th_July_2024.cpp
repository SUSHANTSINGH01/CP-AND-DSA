class Solution {
  public:
  
    unordered_map<int,int>mp;
    
    int dfs(int i,int j,vector<vector<int>>&grid,vector<vector<bool>>&vis,int f)
    {
        int n=grid.size();
        if(i<0 || j<0 || i>=n || j>=n || vis[i][j] || grid[i][j]==0){
            return 0;
        }
        
        vis[i][j]=1;
     
        int c=dfs(i+1,j,grid,vis,f)
              + dfs(i-1,j,grid,vis,f)
              + dfs(i,j+1,grid,vis,f)
              + dfs(i,j-1,grid,vis,f)+1;
     

        grid[i][j]=f;
        return c;
    }
    
    
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int f=2;
        vector<vector<bool>>vis(n,vector<bool>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && grid[i][j]==1) {
                    int c=dfs(i,j,grid,vis,f);
                    mp[f]=c;
                    f++;
                }
            }
        }
        
        int res=-1;
    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    
                    int a=((i+1)<n)?grid[i+1][j]:0;
                    int b=((i-1)>=0)?grid[i-1][j]:0;
                    int c=((j+1)<n)?grid[i][j+1]:0;
                    int d=((j-1)>=0)?grid[i][j-1]:0;
     
                    set<int>st;
                    st.insert(a);
                    st.insert(b);
                    st.insert(c);
                    st.insert(d);
     
                    int res2=1;
                    for(auto it=st.begin();it!=st.end();it++) {
                        res2+=mp[*it];
                    }
                    res=max(res,res2);
                }
            }
        }
     
        if(res==-1){
            return n*n;
        }
        
        return res;
    }
};
