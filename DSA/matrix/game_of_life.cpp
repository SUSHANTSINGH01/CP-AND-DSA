class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>v(n);    
        
        for(int i=0;i<n;i++)
        v[i].resize(m);
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                c=0;
                if(j>0 && board[i][j-1]==1)
                c++;
                if(j>0 && i>0 && board[i-1][j-1]==1)
                c++;
                if(i>0 && board[i-1][j]==1)
                c++;
                if(i>0 && j<m-1 && board[i-1][j+1]==1)
                c++;
                if(j<m-1 && board[i][j+1]==1)
                c++;
                if(j<m-1 && i<n-1 && board[i+1][j+1]==1)
                c++;
                if(i<n-1 && board[i+1][j]==1)
                c++;
                if(i<n-1 && j>0 && board[i+1][j-1]==1)
                c++;
                if(c==3 && board[i][j]==0)
                v[i][j]=1;
                else if(c<2 && board[i][j]==1)
                v[i][j]=0;
                else if(c<=3 && c>=2 && board[i][j]==1)
                v[i][j]=1;
                else if(c>3 && board[i][j]==1)
                v[i][j]=0;
                else
                v[i][j]=board[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                board[i][j]=v[i][j];
            }
        }
    }
};
