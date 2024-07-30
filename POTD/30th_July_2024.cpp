class Solution {
  public:
    void paths(vector<vector<int>>&m,int n,string str,int r,int c,vector<vector<bool>>&vis,vector<string>&res)
    {
        if(r==n-1 && c==n-1){
            res.push_back(str);
            return ;
        }
        
        if(c+1<n && vis[r][c+1]==0)
        {
            if(m[r][c+1]==1)
            {
                vis[r][c+1]=1;
                paths(m,n,str+"R",r,c+1,vis,res);
                vis[r][c+1]=0;
            }
        }
        
        if(r+1<n && vis[r+1][c]==0)
        {
            if(m[r+1][c]==1)
            { 
                vis[r+1][c]=1;
                paths(m,n, str+"D",r+1,c,vis,res);
                vis[r+1][c]=0;
            }
        }
        
        if(c-1>=0 && vis[r][c-1]==0)
        {
            if(m[r][c-1]==1)
            {
                vis[r][c-1]=1;
                paths(m,n,str+"L",r,c-1,vis,res);
                vis[r][c-1]=0;
            }
        }
        
        if(r-1>=0 && vis[r-1][c]==0)
        {
            if(m[r-1][c]==1)
            {
                vis[r-1][c]=1;
                paths(m,n,str+"U",r-1,c,vis,res);
                vis[r-1][c]=0;
            }
        }
        return ;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n=mat.size();
        vector<string>res;
        vector<vector<bool>>vis(n,vector<bool>(n,0));
        
        if(mat[n-1][n-1]==0 || mat[0][0]==0)
        return res;
        
        vis[0][0]=1;
        
        string tempStr="";
        paths(mat,n,tempStr,0,0,vis,res);
        return res;
        
    }
};
