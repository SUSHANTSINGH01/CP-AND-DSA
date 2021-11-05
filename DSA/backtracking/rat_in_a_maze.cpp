#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    vector<string>ans;
     
    void solve(vector<vector<int>> &m, int n,string s,int r,int c,vector<vector<bool>> &vis)
    {
        
        if(r==n-1 && c==n-1)
        {
            ans.push_back(s);
            
            return ;
        }
         
        if(r+1<n && !vis[r+1][c])
        {
            if(m[r+1][c]==1)
            {
                vis[r+1][c]=1;
               
                solve(m,n, s+"D",r+1,c,vis);
                vis[r+1][c]=0;
            }
           
        }
        
        if(c-1>=0 && !vis[r][c-1])
        {
            if(m[r][c-1]==1)
            {
                vis[r][c-1]=1;
                
                solve(m,n,s+"L",r,c-1,vis);
                vis[r][c-1]=0;
            }
           
        }
        
        if(c+1<n && !vis[r][c+1])
        {
            if(m[r][c+1]==1)
            {
                vis[r][c+1]=1;
                
                solve(m,n,s+"R",r,c+1,vis);
                vis[r][c+1]=0;
            }
          
        }
         
        if(r-1>=0 && !vis[r-1][c])
        {
            if(m[r-1][c]==1)
            {
                vis[r-1][c]=1;
                
                solve(m,n,s+"U",r-1,c,vis);
                vis[r-1][c]=0;
            }
          
        }
        
        
        
       
       // return ;
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) 
    {
        // Your code goes here
        vector<vector<bool>>vis (n, vector<bool> (n,0));
        if(m[n-1][n-1]==0||m[0][0]==0)
        return ans;
        
        vis[0][0]=1;
        string s="";
        solve(m,n,s,0,0,vis);
        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  
