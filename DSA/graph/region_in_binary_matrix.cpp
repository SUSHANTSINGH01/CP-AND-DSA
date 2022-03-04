void solve1(int x, int y, int r, int c, vector<vector<int>> &A, vector<vector<int>> &vis, int &count,int x1[], int y1[])
    {
        
        vis[x][y]=1;
      
        for(int i=0;i<8;i++)
        {
            int cx=x+x1[i];
            int cy=y+y1[i];
            if(cx>=0 && cx<r && cy>=0 && cy<c && !vis[cx][cy] && A[cx][cy])
            {
                count++;
                solve1(cx,cy,r,c,A,vis,count,x1,y1);
            }
        }
        
    }



int Solution::solve(vector<vector<int> > &A) 
{
        int res=0;
        int n=A.size();
        int m=A[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int x1[8]={1,1,0,-1,0,1,-1,-1};
        int y1[8]={1,0,1,-1,-1,-1,0,1};
    
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && A[i][j]==1)
                {
                    int count=1;
                    solve1(i,j,n,m,A,vis,count,x1,y1);
                    res=max(res,count);
                    
                }
            }
        }
        return res;
        
}
