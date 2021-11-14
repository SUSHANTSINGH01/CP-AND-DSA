// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
     
    void solve(vector<vector<char>>& grid, int x, int y,int n,int m)
    {
        grid[x][y] = '0';
        int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
        int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};
       
        for(int i=0; i<8; i++) 
        {
            int tmp = x+dx[i];
            int tmp1 = y+dy[i];
            if(tmp>=0 && tmp<n && tmp1>=0 && tmp1<m && grid[tmp][tmp1]=='1')
            solve(grid, tmp, tmp1,n,m);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        
        for(int i=0; i<n; i++) 
        {
            for(int j=0; j<m; j++) 
            {
                if(grid[i][j]=='1') 
                {
                    solve(grid,i,j,n,m);
                    ans++;
                }
            }
        }
        return ans;
    }
   
         
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends
